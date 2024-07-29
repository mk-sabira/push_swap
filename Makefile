# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmakhama <bmakhama@student.42abudhabi.a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/08 09:30:18 by bmakhama          #+#    #+#              #
#    Updated: 2024/07/29 12:29:49 by bmakhama         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra -g3

LIBFT = libft/libft.a

NAME = push_swap
SRC = push_swap.c add_node.c valid_and_init.c split.c free_stack.c \
		push_operation.c rotate_operation.c rev_rot_operation.c swap_operation.c sorted_stack.c \
		sort_three.c sort_stack.c sort_stack_utils.c moves_a_b.c cheapest_move.c fill_data_struct.c \
		max_min_nb.c valid_and_init_utils.c split_reserve_quotes.c total_move.c do_rot_sort.c


OBJ = ${SRC:.c=.o}

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	$(CC) $(CFLAGS) -o  $(NAME) $(LIBFT) $(OBJ)

$(LIBFT):
	make -C libft

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)
	make -C libft clean

fclean: clean
	make -C libft fclean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean