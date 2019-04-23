/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshagga <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 18:40:10 by mshagga           #+#    #+#             */
/*   Updated: 2019/04/13 18:40:10 by mshagga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*p1;

	p1 = s1;
	while (*p1 && n-- > 0)
		p1++;
	if (!*p1)
	{
		ft_strncpy(p1, s2, n);
		p1[n + 1] = '\0';
	}
	return (s1);
}
