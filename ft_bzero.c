/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshagga <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 21:03:13 by mshagga           #+#    #+#             */
/*   Updated: 2019/04/07 21:03:13 by mshagga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	char *s;

	s = (char*)str;
	if (!s)
		return ;
	while (n-- > 0)
		*s++ = '\0';
}
