/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshagga <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 19:18:09 by mshagga           #+#    #+#             */
/*   Updated: 2019/12/05 19:18:09 by mshagga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_swap(int	*a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}

int		*ft_insort(int *data, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < len)
	{
		j = i;
		while (j > 0 && data[j] < data[j - 1])
		{
			ft_swap(data + j, data + j - 1);
			j--;
		}
		i++;
	}
	return (data);
}
