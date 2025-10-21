# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lpaiva <lpaiva@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/10 16:47:18 by lpaiva            #+#    #+#              #
#    Updated: 2025/10/21 22:59:57 by lpaiva           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
       ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	   ft_memcmp.c ft_memchr.c ft_toupper.c ft_tolower.c ft_strlcat.c \
	   ft_strlcpy.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c \
	   ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c \
	   ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_put*.c

BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
        ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
		ft_lstclear_bonus.c ft_lstmap_bonus.c ft_lstiter_bonus.c


OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

%.o: %.c
		$(CC) -I $(CFLAGS) $(INC_DIR) -c $< -o $@

clean:
		rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all

bonus: $(OBJS) $(BONUS_OBJS)
		ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)
		
.PHONY: all clean fclean re
