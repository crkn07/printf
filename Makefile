# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: crtorres <crtorres@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/13 11:29:59 by crtorres          #+#    #+#              #
#    Updated: 2022/10/13 11:30:00 by crtorres         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFT_OBJS = libft/*.o

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c 

OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) libft
	ar rc $(OBJS) $(LIBFT_OBJS)

libft:
	make  -C libft

clean:
	rm -f $(OBJS)
	make -C libft clean
	
fclean: clean
	rm -f $(NAME) libft/libft.a
	
re: fclean all

.PHONY: all re clean fclean libft
