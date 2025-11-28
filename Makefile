# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfontain <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/18 19:12:14 by mfontain          #+#    #+#              #
#    Updated: 2025/11/28 10:34:36 by mfontain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS =	ft_printf.c ft_printer.c ft_putchar_fd_handler.c ft_putstr_fd_handler.c \
	ft_putnbr_fd_handler.c ft_putnbr_un_fd_handler.c ft_puthex_low_fd_handler.c \
	ft_puthex_upp_fd_handler.c ft_putptr_fd_handler.c ft_putchar_fd.c \
	ft_putnbr_base_fd.c ft_putnbr_fd.c ft_putnbr_un_fd.c ft_putptr_fd.c \
	ft_putstr_fd.c ft_strlen.c 

OBJS	= $(SRCS:.c=.o)
HEADERS	= ft_printf.h

CC	= cc
CFLAGS	= -Wall -Wextra -Werror -I.
RM	= rm -f

all:	$(NAME)

$(NAME):	$(OBJS)
		ar rcs $(NAME) $(OBJS)
	
$(OBJS):	$(HEADERS)

clean:
		$(RM) $(OBJS)

fclean: 	clean
		$(RM) $(NAME)

re:		fclean $(NAME)

.PHONY:		all clean fclean re
