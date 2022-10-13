# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: crtorres <crtorres@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/13 11:29:59 by crtorres          #+#    #+#              #
#    Updated: 2022/10/13 17:12:27 by crtorres         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFT_OBJS = libft/*.o

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c \
		libft/ft_putchar.c \
		libft/ft_putstr.c \
		libft/ft_putnbr.c \
		libft/ft_putunsnbr.c \
		libft/ft_putunsnbr_base.c \
		libft/ft_prsprint.c \
		libft/ft_strlen.c \
		libft/ft_hexpoint.c \
		libft/ft_putlngnbr_base.c \
		libft/ft_checkbase.c \
		libft/ft_checkparam.c \

OBJS = $(SRC:.c=.o)

RM = rm -f

all: $(NAME) $(OBJS)

$(NAME): $(OBJS) libft
	ar rcs $(OBJS) $(LIBFT_OBJS)

libft:
	make  -C libft

clean:
	$(RM) $(OBJS)
	
fclean:
	$(RM) $(NAME) $(OBJS)
	
re: fclean all

.PHONY: all re clean fclean
