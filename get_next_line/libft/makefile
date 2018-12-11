# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: groberto <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/16 17:46:34 by groberto          #+#    #+#              #
#    Updated: 2018/12/06 11:15:28 by groberto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

INC		= ./includes/libft.h

CC		= gcc

CFLAGS	= -Wall -Werror -Wextra

OBJ		= $(SRC:.c=.o)

SRC		= ft_bzero.c \
		  ft_memcpy.c \
		  ft_memset.c \
		  ft_strdel.c \
		  ft_strdup.c \
		  ft_strlen.c \
		  ft_strnew.c \
		  ft_putstr.c \
		  ft_memdel.c \
		  ft_putnbr.c \
		  ft_putchar.c \
		  ft_strcpy.c \


all : $(NAME)

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o : %.c
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
