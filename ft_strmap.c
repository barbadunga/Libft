/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshagga <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 17:44:37 by mshagga           #+#    #+#             */
/*   Updated: 2019/04/14 17:44:37 by mshagga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	char	*new;
	size_t	i;
	size_t	len;

	if (!*s || !*f)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	new = ft_strnew(len);
	while (i < len)
	{
		new[i] = f(s[i]);
		i++;
	}
	return (new);
}
