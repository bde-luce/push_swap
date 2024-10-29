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

BONUS_NAME = checker

SRC = 	best_op_combo check_error check_min_max count_op create_and_order extra_functions \
	final_nbr_rev_rotate_op final_nbr_rotate_op find_best_value lst_functions make_move \
	move_back_and_order nbr_op op_push op_rev_rotate op_rotate op_swap

SRC_BONUS = checker_bonus/checker checker_bonus/execute_moves checker_bonus/op_swap_b \
	checker_bonus/op_push_b checker_bonus/op_rotate_b checker_bonus/op_rev_rotate_b \
	checker_bonus/get_next_line/get_next_line checker_bonus/get_next_line/get_next_line_utils

OBJ = $(SRC:=.o)
OBJ_BONUS = $(SRC_BONUS:=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

FT_PRINTF = ./ft_printf/libftprintf.a
FT_PRINTF_PATH = ./ft_printf

LIBFT = ./libft/libft.a
LIBFT_PATH = ./libft

all: $(NAME)

$(NAME): $(OBJ)
		make -C $(FT_PRINTF_PATH)
		make -C $(LIBFT_PATH)
		$(CC) $(CFLAGS) $(OBJ) $(FT_PRINTF) $(LIBFT) push_swap.c -o $(NAME) 

clean:
		$(RM) $(OBJ) $(OBJ_BONUS)
		make clean -C $(FT_PRINTF_PATH)
		make clean -C $(LIBFT_PATH)

fclean: clean
		make fclean -C $(FT_PRINTF_PATH)
		make fclean -C $(LIBFT_PATH)
		$(RM) $(NAME) $(BONUS_NAME)
	
re: fclean all bonus

bonus: all $(BONUS_NAME)

$(BONUS_NAME): $(OBJ_BONUS)
		$(CC) $(CFLAGS) $(OBJ_BONUS) $(SRC:=.c) $(FT_PRINTF) $(LIBFT) -o $(BONUS_NAME)