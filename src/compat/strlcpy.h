/*
 * strlcpy.h
 *   prototypes for strlcpy.c
 */
/*
 * Copyright (C) 2010 - 2023 Eggheads Development Team
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */

#ifndef _EGG_COMPAT_STRLCPY_H_
#define _EGG_COMPAT_STRLCPY_H_

#ifndef HAVE_STRLCPY
size_t strlcpy(char * __restrict, const char * __restrict, size_t);
#endif /* HAVE_STRLCPY */

#endif /* _EGG_COMPAT_STRLCPY_H_ */
