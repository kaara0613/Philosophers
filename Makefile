# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kaara <kaara@student.42.jp>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/23 16:01:01 by kaara             #+#    #+#              #
#    Updated: 2025/04/23 16:03:55 by kaara            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = philosophers

SRCS = src/main.c \


OBJS = $(SRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror -g -I include

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -I include -o $(NAME)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

make re: fclean all

.PHONY: all clean fclean re
