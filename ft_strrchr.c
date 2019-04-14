/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshagga <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 16:12:59 by mshagga           #+#    #+#             */
/*   Updated: 2019/04/14 16:12:59 by mshagga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;
	char	*ptr;

	ptr = (char *)s;
	tmp = NULL;
	while (*ptr)
	{
		if (*ptr == c)
			tmp = ptr;
		if (*ptr == '\0')
			return (tmp);
		printf("%c\t%c\n", *ptr, *tmp);
		ptr++;
	}
	return (NULL);
}

int main()
{
	char str[] = "aabbcc";

	printf("%s\n", ft_strrchr(str, 'b'));
	return (0);
}