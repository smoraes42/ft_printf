# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/01 23:15:51 by smoraes-          #+#    #+#              #
#    Updated: 2024/02/02 00:12:37 by smoraes-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= cc
INC		= -I
NAME	= libftprintf.a
ARCS	= ar crs
CFLAGS	= -Wall -Werror -Wextra
LIBH	= /Users/smoraes-/Templates/git/Libft/Project/libft.h
LIBA	= /Users/smoraes-/Templates/git/Libft/Project/libft.a
SRCS	= ft_printf.c
OBJS	= $(SRCS:.c=.o)
MAIN	= ../Main/main.c
RM		= rm -rf
BIN		= ../printf

all: $(NAME)

$(NAME): $(OBJS)
	$(ARCS) $(NAME) $(OBJS)

%.o:%.c $(LIBH) Makefile
	$(CC) $(CFLAGS) -c $< -o $@

bin: $(OBJS) $(NAME) $(MSRC) $(MOBJ)
	$(CC) $(CFLAGS) $(MAIN) $(NAME) $(LIBA) -o $(BIN)




dbg: all
	$(CC) -g $(SRCS) $(LIBS) $(LIBA)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) $(BIN)

cleandbg: clean
	$(RM) *.dSYM *.out

re: fclean all

.PHONY: all clean fclean re
