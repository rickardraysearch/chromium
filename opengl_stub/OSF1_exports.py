# Copyright (c) 2001, Stanford University
# All rights reserved.
#
# See the file LICENSE.txt for information on redistributing this software.

import entrypoints

hacks = ["TexImage3D", "EdgeFlagPointer", "ProgramParameters4fvNV", "ProgramParameters4dvNV"]

entrypoints.GenerateEntrypoints(hacks)

