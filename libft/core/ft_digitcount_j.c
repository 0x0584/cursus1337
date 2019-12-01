/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digitcount_j.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: archid- <archid-@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 03:23:56 by archid-           #+#    #+#             */
/*   Updated: 2019/11/20 23:29:07 by archid-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_s32		ft_digitcount_j(intmax_t n)
{
	t_s32		count;
	uintmax_t	u;

	if (n == 0)
		return (1);
	u = (n < 0) ? -n : n;
	count = 1 + (n < 0);
	while (u / 10)
	{
		u /= 10;
		count++;
	}
	return (count);
}
