# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpaiva <lpaiva@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/10 16:47:18 by lpaiva            #+#    #+#              #
#    Updated: 2025/10/10 18:55:55 by lpaiva           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = 
INC_DIR = libft.h
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
        ar rcs $(NAME) $(OBJS)

%.o: %.c
        $(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

clean: 
        rm -f $(OBJS)

fclean: clean
        rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
