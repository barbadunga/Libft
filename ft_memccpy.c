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
#include <stdio.h>
#include <string.h>

void	*ft_memccpy(void *dst, void *src, int c, size_t n)
{
	unsigned char	*dst8;
	unsigned char	*src8;

	dst8 = (unsigned char*)dst;
	src8 = (unsigned char*)src;
	while (*src8 != c && n-- > 0)
	{
		*dst8++ = *src8++;
		printf("%s\n", dst);
		if (*(src8 - 1) == c)
			return (dst8);
	}
	return (NULL);
}

int main()
{
	char s1[15] = {0};
	printf("%s\n", ft_memccpy(s1, "Bara", 'r', 5));
	printf("%s\n", s1);
	printf("__________________\n");
	printf("%s\n", memccpy(s1, "Bara", 'r', 5));
	printf("%s\n", s1);
	return (0);
}