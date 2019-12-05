# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mshagga <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/18 15:31:11 by mshagga           #+#    #+#              #
#    Updated: 2019/04/18 15:58:02 by mshagga          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = libft.a
CFLAGS = -Wall -Wextra -Werror -I. -c -g
SOURCES = ft_atoi.c \
    ft_bzero.c \
    ft_isalnum.c \
    ft_isalpha.c \
    ft_isascii.c \
    ft_isdigit.c \
    ft_isprint.c \
    ft_isspace.c \
    ft_memalloc.c \
    ft_memccpy.c \
    ft_memchr.c \
    ft_memcmp.c \
    ft_memcpy.c \
    ft_memdel.c \
    ft_memmove.c \
    ft_memset.c \
    ft_putchar.c \
    ft_putstr.c \
    ft_strcat.c \
    ft_strchr.c \
    ft_strclr.c \
    ft_strcmp.c \
    ft_strcpy.c \
    ft_strdel.c \
    ft_strdup.c \
    ft_strequ.c \
    ft_striter.c \
    ft_striteri.c \
    ft_strjoin.c \
    ft_strlcat.c \
    ft_strlen.c \
    ft_strmap.c \
    ft_strmapi.c \
    ft_strncat.c \
    ft_strncmp.c \
    ft_strncpy.c \
    ft_strnequ.c \
    ft_strnew.c \
    ft_strnstr.c \
    ft_strrchr.c \
    ft_strstr.c \
    ft_strsub.c \
    ft_tolower.c \
    ft_toupper.c \
    ft_strtrim.c \
    ft_strsplit.c \
    ft_itoa.c \
    ft_putendl.c \
    ft_putnbr.c \
    ft_putchar_fd.c \
    ft_putstr_fd.c \
    ft_putendl_fd.c \
    ft_putnbr_fd.c \
    ft_lstnew.c \
    ft_lstdelone.c \
    ft_lstdel.c \
    ft_lstadd.c \
    ft_lstiter.c \
    ft_lstmap.c \
    ft_lstcat.c \
    ft_memdup.c \
    ft_realloc_str.c \
    ft_vec_add.c  \
    ft_vec_del.c  \
    ft_vec_init.c  \
    ft_vec_resize.c \
    get_next_line.c \
    ft_tolowercase.c \
    ft_insort.c \

OBJECTS = $(SOURCES:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) $<

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
