# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfontain <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/18 19:12:14 by mfontain          #+#    #+#              #
#    Updated: 2025/11/24 14:56:00 by mfontain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS =	libftprintf.c ft_putchar_fd_handler.c ft_putstr_fd_handler.c \
	ft_putnbr_fd_handler.c ft_putnbr_un_fd_handler.c 

OBJS	= $(SRCS:.c=.o)

HEADERS	= libftprintf.h

INCLUDES = -I. -Ilibft

CC	= cc
CFLAGS	= -Wall -Wextra -Werror $(INCLUDES)
RM	= rm -f

LIBFT =	libft/libft.a

all:	$(LIBFT) $(NAME)

$(LIBFT):
	make -C libft

$(NAME):	$(OBJS) $(LIBFT)
		ar rcs $(NAME) $(OBJS)

%.o: %.c	$(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
	make -C libft clean

fclean: clean
	$(RM) $(NAME)
	make -C libft fclean

re:		fclean all

.PHONY:		all clean fclean re
