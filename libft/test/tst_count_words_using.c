/*
 * File: tst_count_words_using.c
 * Author: Anas Rchid (0x0584)
 *
 * Created: <2019-02-11 Mon 18:13:17>
 * Updated: <2019-02-13 Wed 23:13:16>
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
#include "testing.h"

void tst_count_words_using(char *str, char c, char *pnbr) {
	t_uint count = 0, expected = 0;

	count = ft_count_words_using(str, c);
	expected = (t_uint) atoi(pnbr);
	printf("%s ('%u vs %u')\n", str, expected, count);
}

int main(int argc, char *argv[]) {
	int i = 1;

	if (argc > 3)
		while ((argc - 1) % 3 == 0 &&  i < argc) {
			tst_count_words_using(argv[i], argv[i + 1][0],
								  argv[i + 2]);
			i += 3;
		} else
		tst_count_words_using(" this is a test ", ' ', "4");

	return 0;
}
