/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshagga <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/13 15:18:25 by mshagga           #+#    #+#             */
/*   Updated: 2019/04/13 15:18:25 by mshagga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char *ptr;

	ptr = (char *)b;
	while (len-- > 0)
		*ptr++ = (unsigned char)c;
	return (b);
}

int main()
{
	int arr[5] = {0};
	int i;

	i = 0;
	ft_memset(arr, 5, 20);
	while (i < 5)
		printf("%d\n", arr[i++]);
	return (0);
}