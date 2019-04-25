/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: AlexandrSergeev <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 15:06:38 by AlexandrSergeev   #+#    #+#             */
/*   Updated: 2019/04/23 16:34:06 by mshagga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*ptr;

	ptr = (char*)str;
	while (--n > 0 && *ptr != (char)c)
		ptr++;
	if (*ptr == (char)c)
		return ((void*)ptr);
	return (NULL);
}
