/* Copyright (c) 2001, Stanford University
 * All rights reserved
 *
 * See the file LICENSE.txt for information on redistributing this software.
 */

#include "cr_spu.h"
#include "cr_mothership.h"
#include "cr_environment.h"
#include "cr_string.h"
#include "cr_error.h"
#include "cr_mem.h"
#include "perfspu.h"
#include <fcntl.h>
#ifndef WINDOWS
#include <unistd.h>
#endif

extern SPUNamedFunctionTable perf_table[];
perfSPU perf_spu;

#if 0 /* for testing */
extern void perfspuChromiumParameterfCR(GLenum, float);
#endif
SPUFunctions perf_functions = {
	NULL, /* CHILD COPY */
	NULL, /* DATA */
	perf_table /* THE ACTUAL FUNCTIONS */
};

SPUFunctions *perfSPUInit( int id, SPU *child, SPU *super,
		unsigned int context_id,
		unsigned int num_contexts )
{

	(void) super;
	(void) context_id;
	(void) num_contexts;

	perf_spu.id = id;
	perf_spu.has_child = 0;
	if (child)
	{
		crSPUInitDispatchTable( &(perf_spu.child) );
		crSPUCopyDispatchTable( &(perf_spu.child), &(child->dispatch_table) );
		perf_spu.has_child = 1;
	}
	crSPUInitDispatchTable( &(perf_spu.super) );
	crSPUCopyDispatchTable( &(perf_spu.super), &(super->dispatch_table) );
	perfspuGatherConfiguration();

	crGetHostname(perf_spu.hostname, sizeof(perf_spu.hostname));

	perf_spu.timer = crTimerNewTimer();

#if 0 /* for testing */
	perfspuChromiumParameterfCR(GL_PERF_START_TIMER_CR, 5.0);
#endif

	if ( perf_spu.mothership_log )
		perf_spu.conn = crMothershipConnect( );
	else if (crStrlen(perf_spu.log_filename)>0)
      		perf_spu.log_file = fopen( perf_spu.log_filename, "w" );
      		if (perf_spu.log_file == NULL) {
	 	    crError( "Couldn't open perf SPU log file %s", perf_spu.log_filename );
	}

	return &perf_functions;
}

void perfSPUSelfDispatch(SPUDispatchTable *self)
{
	crSPUInitDispatchTable( &(perf_spu.self) );
	crSPUCopyDispatchTable( &(perf_spu.self), self );
}

extern CRConnection** crNetDump(int *num);

int perfSPUCleanup(void)
{
	char str[200];
	CRConnection **conn;
	CRConnection *c;
	int num_conns;
	int i;

	conn = crNetDump(&num_conns);

	sprintf(str, "SPUID %d NUMBER OF CONNECTIONS %d", perf_spu.id, num_conns);
	perfspuDump( str );

	for (i = 0; i < num_conns; i++)
	{
		c = conn[i];
		if (c) {
			sprintf(str, "SPUID %d CONNECTION ID %d TOTAL_BYTES RECEIVED %d", perf_spu.id, i, c->total_bytes_recv);
			perfspuDump( str );
			sprintf(str, "SPUID %d CONNECTION ID %d TOTAL_BYTES SENT %d", perf_spu.id, i, c->total_bytes_sent);
			perfspuDump( str );
		} else {
			sprintf(str, "SPUID %d CONNECTION ID %d UNUSED (NULL CRConnection)", perf_spu.id, i);
			perfspuDump( str );
		}
	}

	sprintf(str, "SPUID %d TOTAL FRAMES %d", perf_spu.id, perf_spu.total_frames );
	perfspuDump( str );
	sprintf(str, "SPUID %d TOTAL CLEARS %d", perf_spu.id, perf_spu.clear_counter );
	perfspuDump( str );

	perfspuDump( " " );

	if ( perf_spu.mothership_log )
		crMothershipDisconnect( perf_spu.conn );
	else 
		fclose( perf_spu.log_file );

	return 1;
}

extern SPUOptions perfSPUOptions[];

int SPULoad( char **name, char **super, SPUInitFuncPtr *init,
	     SPUSelfDispatchFuncPtr *self, SPUCleanupFuncPtr *cleanup,
	     SPUOptionsPtr *options, int *flags )
{
	*name = "perf";
	*super = "passthrough";
	*init = perfSPUInit;
	*self = perfSPUSelfDispatch;
	*cleanup = perfSPUCleanup;
	*options = perfSPUOptions;
	*flags = (SPU_NO_PACKER|SPU_NOT_TERMINAL|SPU_MAX_SERVERS_ZERO);
	
	return 1;
}
