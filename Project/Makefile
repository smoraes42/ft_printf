# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/01 23:15:51 by smoraes-          #+#    #+#              #
#    Updated: 2024/03/04 11:27:29 by smoraes-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= cc
INC		= -I
NAME	= libftprintf.a
ARCS	= ar crs
CFLAGS	= -Wall -Werror -Wextra
SRCS	= ft_printf.c ft_printf.c ft_printf_utils.c ft_put_uint_fd.c\
		  ft_put_ulong_fd.c ft_putchar_fd.c ft_puthex_fd.c ft_puthex_frmt_fd.c\
		  ft_puthex_frmt_mayus_fd.c ft_puthex_mayus_fd.c ft_putnbr_fd.c\
		  ft_putstr_fd.c
OBJS	= $(SRCS:.c=.o)
LIB		= ft_printf.h
RM		= rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(ARCS) $(NAME) $(OBJS)

%.o:%.c $(LIBH) Makefile
	$(CC) $(CFLAGS) -c $< -o $@

dbg: all
	$(CC) -g $(SRCS) $(LIBS) $(LIBA)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) $(BIN)

cleandbg: clean
	$(RM) *.dSYM *.out

re: fclean all

.PHONY: all clean fclean re dbg cleandbg
