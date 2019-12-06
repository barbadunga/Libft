/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolowercase.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshagga <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 14:21:29 by mshagga           #+#    #+#             */
/*   Updated: 2019/11/29 14:21:29 by mshagga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_tolowercase(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr)
	{
		*ptr = ft_tolower(*ptr);
		ptr++;
	}
	return (str);
}
