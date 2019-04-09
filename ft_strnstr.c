/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshagga <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 23:13:57 by mshagga           #+#    #+#             */
/*   Updated: 2019/04/09 23:13:57 by mshagga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(char *big, char *little, size_t n)
{
	char *match;
	char *srch;
	int stop;

	srch = little;
	if (!*little)
		return (big);
	while (*big && n-- > 0)
	{
		if (*big != *little)
			big++;
		match = big;
		stop = n;
		while (*big == *srch && stop-- > 0)
		{
			big++;
			srch++;
			if (*big == '\0' && *srch == '\0')
				return (match);
		}
		big = match;
		srch = little;
	}
	return (NULL);
}

int main()
{
	printf("std : %s\n", strnstr("Foo Bar Baz", "Baz", 11));
	printf("lib : %s\n", ft_strnstr("Foo Bar Baz", "Baz", 11));
	return (0);
}