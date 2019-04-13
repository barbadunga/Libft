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
size_t	ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
int 	ft_strncmp(char *s1, char *s2, size_t n);
int		ft_atoi(const char *str);
void	*ft_memcpy(void *dst, void *src, size_t n);
void	*ft_memset(void *b, int c, size_t len);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, const char *src, size_t n);
char	*ft_strcat(char *s1, char *s2);
char	*ft_strncat(char *s1, char *s2, size_t n);
char	*ft_strdup(const char *s1);

#endif
