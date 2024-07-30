# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmakhama <bmakhama@student.42abudhabi.a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/01 09:32:53 by bmakhama          #+#    #+#              #
#    Updated: 2024/07/29 11:10:01 by bmakhama         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_atoll.c ft_isdigit.c ft_isspace.c ft_strcat.c ft_strjoin.c ft_strlen.c \
       ft_strdup.c ft_strcat.c ft_strchr.c

OBJS = $(SRCS:.c=.o)
CC = gcc
RM = rm -f
CFLAGS = -Wall -Werror -Wextra -I.
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
