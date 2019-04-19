/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshagga <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 14:51:56 by mshagga           #+#    #+#             */
/*   Updated: 2019/04/14 14:51:56 by mshagga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	char	*ptr;
	size_t 	len_dst;
	size_t	size_buf;

	size_buf = n;
	ptr = dst;
	while (*ptr && n > 0)
	{
		ptr++;
		n--;
	}
	if (n == 0)
		return (size_buf + ft_strlen(src));
	len_dst = size_buf - n;
	ft_strncpy(ptr, src, n - 1);
	*(ptr + n) = '\0';
	return (len_dst + ft_strlen(src));
}
