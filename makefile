# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chle-van <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/16 01:43:30 by chle-van          #+#    #+#              #
#    Updated: 2016/11/16 05:52:26 by chle-van         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
FLAGS=-Wall -Wextra -Werror
SRC=ft_alnum\
	ft_atoi\
	ft_bzero\
	ft_isalpha\
	ft_isascii\
	ft_isdigit\
	ft_isprint\
	ft_memccpy\
	ft_memchr\
	ft_memcmp\
	ft_memcpy\
	ft_memmove\
	ft_memset\
	ft_strcat\
	ft_strchr\
	ft_strcmp\
	ft_strcpy\
	ft_strdup\
	ft_strlcat\
	ft_strlen\
	ft_strncat\
	ft_strncmp\
	ft_strncpy\
	ft_strnstr\
	ft_strrchr\
	ft_strstr\
	ft_tolower\
	ft_toupper
SRC_DIR=norme
NAME=TEST

all:obj
	$(CC) $(addsuffix .o, $(SRC)) -o $(NAME)

obj:
	$(CC) $(FLAGS) -c $(addsuffix .c, $(SRC))

re:fclean all

clean:
	rm -rf *.o

fclean:clean
	rm  -rf $(NAME)
