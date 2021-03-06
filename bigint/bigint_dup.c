/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bigint_dup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: archid- <archid-@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 17:59:08 by archid-           #+#    #+#             */
/*   Updated: 2019/09/28 19:29:29 by archid-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bigint.h"

t_bigint	bigint_dup(t_bigint u)
{
	t_bigint v;

	ft_memcpy(&v, &u, sizeof(t_bigint));
	return (v);
}
