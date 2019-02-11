/*
 * File: ft_strncmp.c
 * Author: Anas Rchid (0x0584)
 *
 * Created: <2019-02-10 Sun 20:01:22>
 * Updated: <2019-02-10 Sun 20:12:52>
 *
 * Copyright (C) 2019
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.	If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street, Fifth
 * Floor, Boston, MA 02110-1301, USA.
 */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n) {
	while (*s1 == *s2 && --n) {
		s1++;
		s2++;
	}
	return n == 0 ? 0 : (*s1 - *s2);
}