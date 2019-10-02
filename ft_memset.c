/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: archid- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 17:43:50 by archid-           #+#    #+#             */
/*   Updated: 2019/06/30 01:30:59 by archid-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	t_s8	*buff;

	i = 0;
	buff = (t_s8 *)s;
	while (i < n)
		buff[i++] = (t_s8)c;
	return (buff);
}