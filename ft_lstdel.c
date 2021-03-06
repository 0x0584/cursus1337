/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: archid- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 07:46:28 by archid-           #+#    #+#             */
/*   Updated: 2020/12/16 13:38:00 by archid-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	lstdel_helper(void *content, size_t size)
{
	if (size)
		free(content);
}

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list *tmp[2];

	if (!(alst && *alst))
		return ;
	tmp[0] = *alst;
	while (tmp[0])
	{
		tmp[1] = tmp[0];
		tmp[0] = tmp[0]->next;
		(*del)(tmp[1]->content, tmp[1]->content_size);
		free(tmp[1]);
	}
	*alst = NULL;
}
