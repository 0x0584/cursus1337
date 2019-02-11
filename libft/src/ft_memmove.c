/*
 * File: ft_memmove.c
 * Author: Anas Rchid
 *
 * Created: <2019-02-06 Wed 22:52:13>
 * Updated: <2019-02-10 Sun 01:11:59>
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

void *ft_memmove(void *dest, const void *src, size_t n) {
	t_uchar *sbuff;
	t_uchar *dbuff;
	size_t i;

	i = 0;
	dbuff = (t_uchar *) dest;
	sbuff = (t_uchar *) malloc(n * sizeof(t_uchar));
	ft_memcpy(sbuff, src, n);
	while (i < n) {
		dbuff[i] = sbuff[i];
		i++;
	}
	return (dest);
}