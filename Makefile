# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/15 22:01:30 by bde-luce          #+#    #+#              #
#    Updated: 2024/10/15 22:01:30 by bde-luce         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

BONUS_NAME = checker

SRC = 	best_op_combo check_error check_min_max count_op create_and_order extra_functions \
	final_nbr_rev_rotate_op final_nbr_rotate_op find_best_value lst_functions make_move \
	move_back_and_order nbr_op op_push op_rev_rotate op_rotate op_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

FT_PRINTF = ./ft_printf/libftprintf.a
FT_PRINTF_PATH = ./ft_printf

all: $(NAME)

$(NAME): $(SRC:=.o)
		make -C $(FT_PRINTF_PATH)
		$(CC) $(CFLAGS) $(SRC:=.o) $(FT_PRINTF) push_swap.c -fsanitize=address -o $(NAME) 

clean:
		$(RM) $(SRC:=.o)
		make clean -C $(FT_PRINTF_PATH)

fclean: clean
		make fclean -C $(FT_PRINTF_PATH)
		$(RM) $(NAME)
	
re: fclean all