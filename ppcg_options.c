/*
 * Copyright 2010-2011 INRIA Saclay
 *
 * Use of this software is governed by the GNU LGPLv2.1 license
 *
 * Written by Sven Verdoolaege, INRIA Saclay - Ile-de-France,
 * Parc Club Orsay Universite, ZAC des vignes, 4 rue Jacques Monod,
 * 91893 Orsay, France
 */

#include "ppcg_options.h"

ISL_ARGS_START(struct ppcg_options, ppcg_options_args)
ISL_ARG_BOOL(struct ppcg_options, scale_tile_loops, 0,
	"scale-tile-loops", 1, NULL)
ISL_ARG_BOOL(struct ppcg_options, wrap, 0, "wrap", 1, NULL)
ISL_ARG_BOOL(struct ppcg_options, use_shared_memory, 0, "shared-memory", 1,
	"use shared memory in kernel code")
ISL_ARG_BOOL(struct ppcg_options, use_private_memory, 0, "private-memory", 1,
	"use private memory in kernel code")
ISL_ARG_STR(struct ppcg_options, ctx, 0, "ctx", "context", NULL,
    "Constraints on parameters")
ISL_ARG_INT(struct ppcg_options, tile_size, 'S', "tile-size", "size", 32, NULL)
ISL_ARGS_END
