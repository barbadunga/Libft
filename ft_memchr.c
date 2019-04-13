/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: AlexandrSergeev <marvin@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 15:06:38 by AlexandrSergeev   #+#    #+#             */
/*   Updated: 2019/04/09 15:06:38 by AlexandrSergeev  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memchr(void *str, int c, size_t n)
{
	char *ptr;

	ptr = (char*)str;
	while (*ptr != c && n-- > 0)
		ptr++;
	return ((void*)ptr);
}

int main()
{
	char *ptr;
	char str[] = "new string";

	ptr = ft_memchr(str, 'q', 1);
	ft_putstr(ptr);
	return (0);
}