# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/08 18:04:23 by juhur             #+#    #+#              #
#    Updated: 2021/12/09 15:59:38 by juhur            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = \
	ft_printf.c		\
	print_char.c	\
	print_decimal.c	\
	print_hexa.c	\
	print_number.c

OBJS = $(SRCS:.c=.o)

.PHONY: all
all: $(NAME)

.PHONY: clean
clean: 
	rm -rf $(OBJS)

.PHONY: fclean
fclean: clean
	rm -rf $(NAME)

.PHONY: re
re: fclean all

$(NAME) : $(OBJS)
	ar rcs $@ $^
