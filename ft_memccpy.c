/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: AlexandrSergeev <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 17:53:02 by AlexandrSergeev   #+#    #+#             */
/*   Updated: 2019/04/08 17:53:02 by AlexandrSergeev  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
=======
void	*ft_memccpy(void *dst, void *src, int c, size_t n)
>>>>>>> 5f2008fc88da11c90d1a3a2b95c1d202b3ec890c
{
	unsigned char *dst8;
	unsigned char *src8;

	dst8 = (unsigned char *)dst;
	src8 = (unsigned char *)src;
	while (n-- > 0)
	{
		if ((*dst8++ = *src8++) == (unsigned char)c)
			return (dst8);
	}
	return (NULL);
}
