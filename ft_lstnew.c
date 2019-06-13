/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshagga <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 12:44:49 by mshagga           #+#    #+#             */
/*   Updated: 2019/04/24 12:44:49 by mshagga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	if (!(new = (t_list*)malloc(sizeof(*new))))
		return (NULL);
	new->content = (content ? ft_memdup(content, content_size) : NULL);
	new->content_size = (content ? content_size : 0);
	new->next = NULL;
	return (new);
}
<<<<<<< HEAD
=======

>>>>>>> 5f2008fc88da11c90d1a3a2b95c1d202b3ec890c
