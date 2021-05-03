# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hwon <hwon@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/14 03:10:18 by hwon              #+#    #+#              #
#    Updated: 2021/05/03 13:44:16 by hwon             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
SRCS	= srcs/ft_memset.c\
		  srcs/ft_bzero.c\
		  srcs/ft_memcpy.c\
		  srcs/ft_memccpy.c\
		  srcs/ft_memmove.c\
		  srcs/ft_memchr.c
OBJS	= ${SRCS:.c=.o}
INCS	= includes/
CC		= gcc
AR		= ar
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror
ARFLAGS = rs

.c.o :
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I${INCS}

${NAME} : ${OBJS}
	${AR} ${ARFLAGS} ${NAME} $ ${OBJS}

all : ${NAME}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY: all clean fclean re .c.o
