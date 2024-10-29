/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 16:12:03 by bde-luce          #+#    #+#             */
/*   Updated: 2024/10/24 16:04:44 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "ft_printf/ft_printf.h"
# include "libft/libft.h"

typedef struct s_stack
{
	int				content;
	struct s_stack	*next;
}	t_stack;

void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);

t_stack	*ps_lstnew(int content);
void	ps_lstadd_back(t_stack **lst, t_stack *new);
t_stack	*ps_lstlast(t_stack *lst);
int		ps_lstsize(t_stack *lst);
void	ps_lstclear(t_stack **lst);

long	ps_atol(const char *nptr);
int		ps_atoi(const char *nptr);

int		check_min(t_stack *b, int value);
int		check_max(t_stack *b, int value);
int		max(t_stack *lst, int max);
int		min_a(t_stack *a);

int		count_rb(t_stack *b, int value);
int		count_rrb(t_stack *b, int value);
int		count_ra(t_stack *a, int value);
int		count_rra(t_stack *a, int value);

int		bigger(int a, int b);
int		best_value(t_stack *a, t_stack *b);

int		rb_ra_best(t_stack *a, t_stack *b, int value);
int		rb_rra_best(t_stack *a, t_stack *b, int value);
int		rrb_ra_best(t_stack *a, t_stack *b, int value);
int		rrb_rra_best(t_stack *a, t_stack *b, int value);

int		nbr_rb(t_stack *a, t_stack *b);
int		nbr_ra(t_stack *a, t_stack *b);
int		nbr_rrb(t_stack *a, t_stack *b);
int		nbr_rra(t_stack *a, t_stack *b);

int		final_nbr_rb(int rb_move, int ra_move);
int		final_nbr_ra(int ra_move, int rb_move);
int		final_nbr_rr(int rr_move, int ra_move, int rb_move);

int		final_nbr_rrb(int rrb_move, int rra_move);
int		final_nbr_rra(int rra_move, int rrb_move);
int		final_nbr_rrr(int rrr_move, int rra_move, int rrb_move);

void	make_move(t_stack **a, t_stack **b);

int		check_order(t_stack *a);
void	order_last3(t_stack **a);
int		next_value(t_stack *a, int value);
void	make_move_back(t_stack **a, t_stack **b);
void	final_order(t_stack **a);

int		check_error(int argc, char **argv);

void	create_stack(int argc, char **argv, t_stack **a);
void	order_stack(t_stack **a, t_stack **b);

#endif
