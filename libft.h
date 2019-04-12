/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshagga <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 21:00:09 by mshagga           #+#    #+#             */
/*   Updated: 2019/04/07 21:00:09 by mshagga          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_tolower(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isspace(int c);
int 	ft_toupper(int c);
int		ft_tolower(int c);
int 	ft_atoi(char *str);
size_t	ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
int 	ft_strncmp(char *s1, char *s2, size_t n);
int 	ft_atoi(char *str);

#endif
