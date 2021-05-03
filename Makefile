# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hwon <hwon@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/14 03:10:18 by hwon              #+#    #+#              #
#    Updated: 2021/05/03 16:21:14 by hwon             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
SRCS	= srcs/ft_memset.c\
		  srcs/ft_bzero.c\
		  srcs/ft_memcpy.c\
		  srcs/ft_memccpy.c\
		  srcs/ft_memmove.c\
		  srcs/ft_memchr.c\
		  srcs/ft_strlen.c\
		  srcs/ft_strlcpy.c\
		  srcs/ft_strlcat.c\
		  srcs/ft_strchr.c\
		  srcs/ft_strrchr.c\
		  srcs/ft_strnstr.c\
		  srcs/ft_strncmp.c
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

norm :
	norminette -R CheckForbiddenSourceHeader ${SRCS}
	norminette -R CheckDefine ${INCS}/*

.PHONY: all clean fclean re .c.o
