/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strreplace.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: archid- <archid-@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 05:58:08 by archid-           #+#    #+#             */
/*   Updated: 2020/12/20 17:34:15 by archid-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strreplace(char **str, char const *base, char const *to)
{
	char	*ptr;
	char	*bar;
	size_t	sizes[2];

	if (!str || !*str || !(ptr = ft_strstr(*str, base)))
		return (NULL);
	sizes[0] = ft_strlen(to);
	sizes[1] = ft_strlen(base);
	bar = ft_strnew(ft_strlen(*str) - ft_strlen(base) + ft_strlen(to));
	ft_strncpy(bar, *str, ptr - *str);
	ft_strncpy(bar + (ptr - *str), to, sizes[0]);
	ft_strncpy(bar + (ptr - *str) + sizes[0], ptr + sizes[1],
					ft_strlen(ptr + sizes[1]));
	ft_strdel(str);
	return (*str = bar);
}
