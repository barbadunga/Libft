/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshagga <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 15:34:15 by mshagga           #+#    #+#             */
/*   Updated: 2019/04/13 15:34:15 by mshagga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, void *src, size_t len)
{
	char buf[len];

	ft_memcpy(buf, src, len);
	ft_memcpy(dst, buf, len);
	return (dst);
}

int main()
{
	char str1[] = "abcdefg";
	char str2[] = "abcdefg";

	printf("%s\n", str1);
	printf("MEMMOVE : %s\n", memmove(str1 + 1, str1, 6));
	printf("FT : %s\n", ft_memmove(str2 + 1, str2, 6));
	return (0);
}