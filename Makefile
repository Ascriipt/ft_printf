# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maparigi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/10 04:14:10 by maparigi          #+#    #+#              #
#    Updated: 2022/02/03 04:01:54 by maparigi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

SRCS = ft_strlen.c ft_putstr.c ft_putchar.c ft_printd.c \
	   ft_getlen.c ft_printf.c ft_printc.c ft_printu.c \
	   ft_printx.c ft_putnbr_base.c ft_printxup.c \
	   ft_prints.c ft_printpercent.c ft_printp.c \

OBJS = ${SRCS:.c=.o}

CFLAGS = -Wall -Wextra -Werror

.c.o:
	gcc ${CFLAGS} -c $< -o ${<:.c=.o}

all:	${NAME}

${NAME}:	${OBJS}
	ar rcs ${NAME} ${OBJS}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re bonus
