# Copyright (c) 2001, Stanford University
# All rights reserved.
#
# See the file LICENSE.txt for information on redistributing this software.

# This file is imported by several other Python scripts

current_fns = {
	'Color': {
		'types': ['b','ub','s','us','i','ui','f','d'],
		'sizes': [3,4],
		'default': [0,0,0,1],
		'members': ['r', 'g', 'b', 'a']
	},
	'Normal': {
		'types': ['b','s','i','f','d'],
		'sizes': [3],
		'default': [0,0,0],
		'members': ['x', 'y', 'z']
	},
	'TexCoord': {
		'types': ['s','i','f','d'],
		'sizes': [1,2,3,4],
		'default': [0,0,0,1],
		'members': ['s', 't', 'r', 'q'],
		'array': 'CR_MAX_TEXTURE_UNITS'
	},
	'EdgeFlag': {
		'types': ['l'],
		'sizes': [1],
		'default': [1],
		'members': []
	},
	'Index': {
		'types': ['ub','s','i','f','d'],
		'sizes': [1],
		'default': [0],
		'members': []
	}
}

current_vtx = {
	'Vertex': {
		'types': ['s','i','f','d'],
		'sizes': [2,3,4],
		'default': [0,0,0,1],
		'members': ['x', 'y', 'z', 'w']
	}
}

gltypes = {
	'l': {
		'type': 'GLboolean',
		'size': 1
	},
	'b': {
		'type': 'GLbyte',
		'size': 1
	},
	'ub': {
		'type': 'GLubyte',
		'size': 1
	},
	's': {
		'type': 'GLshort',
		'size': 2
	},
	'us': {
		'type': 'GLushort',
		'size': 2
	},
	'i': {
		'type': 'GLint',
		'size': 4
	},
	'ui': {
		'type': 'GLuint',
		'size': 4
	},
	'f': {
		'type': 'GLfloat',
		'size': 4
	},
	'd': {
		'type': 'GLdouble',
		'size': 8
	}
}
