# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smoraes- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/11 10:47:16 by smoraes-          #+#    #+#              #
#    Updated: 2024/03/11 11:48:53 by smoraes-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror
ARS  = ar crs
SRCS = ft_printf.c ft_putnums.c
OBJS = $(SRCS:.c=.o)
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(ARS) $(NAME) $(OBJS)
	
%.o:%.c ft_printf.h Makefile
	$(CC) $(CFLAGS) -c $< -o $@

bin: all
	$(CC) $(CFLAGS) $(NAME) main.c

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
