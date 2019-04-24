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
	char		*p1;
	const char	*p2;

	p1 = s1;
	p2 = s2;
	while (*p1)
		p1++;
	while (*p2 && n-- > 0)
	{
		*p1++ = *p2++;
		if (!*p2 || n == 0)
			*p1 = '\0';
	}
	return (s1);
}
