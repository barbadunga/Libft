/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: AlexandrSergeev <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 11:37:28 by AlexandrSergeev   #+#    #+#             */
/*   Updated: 2019/04/08 11:37:28 by AlexandrSergeev  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, void *src, int c, size_t n)
{
	char	*dst8;
	char	*src8;

	dst8 = (char*)dst;
	src8 = (char*)src;
	while (n-- > 0)
		*dst8++ = *src8++;
	return (dst);
}
