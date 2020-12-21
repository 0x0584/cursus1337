/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoupper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: archid- <archid-@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 14:34:48 by archid-           #+#    #+#             */
/*   Updated: 2020/12/21 09:45:39 by archid-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtoupper(char **str)
{
	char *tmp;

	if (!str || !*str)
		return (NULL);
	tmp = *str;
	while (tmp)
	{
		if (*tmp >= 'a' && *tmp <= 'z')
			*tmp -= 0x20;
		tmp++;
	}
	return (*str);
}
