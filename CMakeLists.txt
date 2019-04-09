cmake_minimum_required(VERSION 3.13)
project(libft C)

set(CMAKE_C_STANDARD 99)

add_executable(libft ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_isspace.c ft_memccpy.c ft_memchr.c ft_putchar.c ft_strlen.c
		ft_tolower.c ft_toupper.c ft_memcmp.c ft_memcpy.c ft_strncmp.c ft_strcmp.c ft_strnstr.c)