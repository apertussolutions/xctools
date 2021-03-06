/*
 * Copyright (c) 2016 Assured Information Security, Ross Philipson <philipsonr@ainfosec.com>
 * Copyright (c) 2012 Citrix Systems, Inc.
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef __PROJECT_H__
# define __PROJECT_H__

# include "config.h"

# ifdef HAVE_STDIO_H
#  include <stdio.h>
# endif

# ifdef HAVE_STDLIB_H
#  include <stdlib.h>
# endif

# ifdef HAVE_STRING_H
#  include <string.h>
# endif

# ifdef HAVE_STRINGS_H
#  include <strings.h>
# endif

# ifdef HAVE_UNISTD_H
#  include <unistd.h>
# endif

# ifdef HAVE_STDINT_H
#  include <stdint.h>
# elif defined(HAVE_SYS_INT_TYPES_H)
#  include <sys/int_types.h>
# endif


#include "prototypes.h"

#endif /* __PROJECT_H__ */
