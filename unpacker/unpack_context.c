/* Copyright (c) 2001, Stanford University
 * All rights reserved
 *
 * See the file LICENSE.txt for information on redistributing this software.
 */

#include "unpacker.h"
#include "cr_mem.h"

#define DISPLAY_NAME_LEN 256

#define READ_BYTES( dest, offset, len ) \
    crMemcpy( dest, (cr_unpackData + (offset)), len )

void crUnpackExtendCreateContext( void )
{
	char dpyName[DISPLAY_NAME_LEN];
	GLint visual = READ_DATA( DISPLAY_NAME_LEN + 8, GLint );
	GLint retVal;

	READ_BYTES( dpyName, 8, DISPLAY_NAME_LEN );
	dpyName[DISPLAY_NAME_LEN - 1] = 0; /* NULL-terminate, just in case */

	SET_RETURN_PTR( DISPLAY_NAME_LEN + 12 );
	SET_WRITEBACK_PTR( DISPLAY_NAME_LEN + 20 );
	retVal = cr_unpackDispatch.CreateContext( dpyName, visual );
	(void) retVal;
}

void crUnpackExtendcrCreateWindow(void)
{
	char dpyName[DISPLAY_NAME_LEN];
	GLint visBits = READ_DATA( DISPLAY_NAME_LEN + 8, GLint );
	GLint retVal;

	READ_BYTES( dpyName, 8, DISPLAY_NAME_LEN );
	dpyName[DISPLAY_NAME_LEN - 1] = 0; /* NULL-terminate, just in case */

	SET_RETURN_PTR( DISPLAY_NAME_LEN + 12 );
	SET_WRITEBACK_PTR( DISPLAY_NAME_LEN + 20 );
	retVal = cr_unpackDispatch.crCreateWindow( dpyName, visBits );
	(void) retVal;
}

