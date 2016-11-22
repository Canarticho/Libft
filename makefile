# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chle-van <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/16 01:43:30 by chle-van          #+#    #+#              #
#    Updated: 2016/11/22 04:43:33 by chle-van         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
FLAGS=-Wall -Wextra -Werror
SRC=ft_alnum\
ft_atoi\
ft_bzero\
ft_countn\
ft_isalpha\
ft_isascii\
ft_isdigit\
ft_isprint\
ft_itoa\
ft_lstadd\
ft_lstdel\
ft_lstdelone\
ft_lstiter\
ft_lstmap\
ft_lstnew\
ft_memalloc\
ft_memccpy\
ft_memchr\
ft_memcmp\
ft_memcpy\
ft_memdel\
ft_memmove\
ft_memset\
ft_putchar\
ft_putchar_fd\
ft_putendl\
ft_putendl_fd\
ft_putnbr\
ft_putnbr_fd\
ft_putstr\
ft_putstr_fd\
ft_strcat\
ft_strchr\
ft_strclr\
ft_strcmp\
ft_strcpy\
ft_strdel\
ft_strdup\
ft_strequ\
ft_striter\
ft_striteri\
ft_strjoin\
ft_strlcat\
ft_strlen\
ft_strmap\
ft_strmapi\
ft_strncat\
ft_strncmp\
ft_strncpy\
ft_strndup\
ft_strnequ\
ft_strnew\
ft_strnstr\
ft_strrchr\
ft_strsplit\
ft_strstr\
ft_strsub\
ft_strtrim\
ft_tolower\
ft_toupper

SRC_DIR=src/

INCLUDES_DIR=includes/

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
