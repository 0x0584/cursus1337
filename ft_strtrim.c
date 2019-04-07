/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: archid- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 01:16:56 by archid-           #+#    #+#             */
/*   Updated: 2019/04/07 05:16:16 by archid-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	slen;
	char	*head;
	char	*tail;

	slen = ft_strlen(s);
	head = (char *)s;
	tail = (char *)s + ft_strlen(s) - 1;
	while (ft_isspace(*head))
		head++;
	while (ft_isspace(*tail))
		tail--;
	return (ft_strrdup(head, tail));
}
