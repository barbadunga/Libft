/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: AlexandrSergeev <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 16:09:32 by AlexandrSergeev   #+#    #+#             */
/*   Updated: 2019/04/09 16:09:32 by AlexandrSergeev  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<string.h>

int	memcmp(const void *s1, const void *s2, size_t n)
{
	char *str1;
	char *str2;

	str1 = (char*)s1;
	str2 = (char*)s2;
	while (n--)
	{
		if (*str1 != *str2)
			return ((unsigned char)str1 - str2)
		str1++;
		str2++;
	}
	return (0);
}

int main ()
{
	char *str1 = "some string to compare";
	char *str2 = "some sttting";

	printf("stdlib : %s\n", memcmp(str1, str2, 3));
	printf("libft  : %s\n", ft_memcmp(str1, str2, 3));
	return (0);
}