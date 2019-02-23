#!/usr/bin/perl
# File: tst_memset.pl
# Author: Anas Rchid (0x0584)
#
# Created: <2019-02-10 Sun 02:05:06>
# Updated: <2019-02-23 Sat 04:09:53>
#
# Copyright (C) 2019
#
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 2, or (at your option)
# any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; see the file COPYING.	If not, write to
# the Free Software Foundation, Inc., 51 Franklin Street, Fifth
# Floor, Boston, MA 02110-1301, USA.

# IDEA:
# =====
#
# 1.1. set a list of inputs
# 1.2. set a list of expected outputs for each input
# 1.3. set a list of program's outputs for each input
# 2. compare expected outputs with real outputs
# 3. print results

use strict;
use warnings;
use Cwd;

my $exec = "tst_memset.out";
my $nargs = 10;
my $nexamples = 25;

sub rand_int {
	return -int(rand(2147483648)) + int(rand(2147483647));
}

sub gen_example {
	my $val = rand_int;
	my $limit = 1 + int(rand($nargs));
	my $args = "";

	# print "$val $limit $/";
	$args .= rand_int . " " while $limit--;


	# getc;
	return "./$exec $val $args";
}

sub get_examples {
	my $nexamples = 1 + int(rand($nexamples));
	my @examples;

	while ($nexamples--) {
		# print "@examples #### $/";
		push @examples, gen_example;
	};
	# print "@examples";
	return @examples;
}

sub tst_memset {
	my @exs = get_examples();
	my $tmp;

	foreach (@exs) {
		qx/$_/ =~ /'(.+)' \('(.+)' vs '(.+)'\)/;
		print "S: $1$/A: $2$/B: $3$/";
		getc
	}
}

tst_memset();
