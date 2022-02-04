# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maparigi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/10 04:14:10 by maparigi          #+#    #+#              #
#    Updated: 2022/02/04 19:00:26 by maparigi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

SRCS = srcs/ft_strlen.c \
	   srcs/ft_putstr.c \
	   srcs/ft_putchar.c \
	   srcs/ft_printd.c \
	   srcs/ft_getlen.c \
	   srcs/ft_printf.c \
	   srcs/ft_printc.c \
	   srcs/ft_printu.c \
	   srcs/ft_printx.c \
	   srcs/ft_putnbr_base.c \
	   srcs/ft_printxup.c \
	   srcs/ft_prints.c \
	   srcs/ft_printpercent.c \
	   srcs/ft_printp.c \

OBJS = ${SRCS:.c=.o}

CFLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all:	${NAME}

${NAME}:	${OBJS}
	ar rcs ${NAME} ${OBJS}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re bonus
