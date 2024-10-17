/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_op_combo.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:17:31 by bde-luce          #+#    #+#             */
/*   Updated: 2024/10/15 15:17:31 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rb_ra_best(t_stack *a, t_stack *b, int value)
{
	int	rb_move;
	int	rrb_move;
	int	ra_move;
	int	rra_move;

	rb_move = count_rb(b, value);
	rrb_move = count_rrb(b, value);
	ra_move = count_ra(a, value);
	rra_move = count_rra(a, value);
	if (bigger(rb_move, ra_move) > (rb_move + rra_move))
		return (0);
	if (bigger(rb_move, ra_move) > (rrb_move + ra_move))
		return (0);
	if (bigger(rb_move, ra_move) > bigger(rrb_move, rra_move))
		return (0);
	return (1);
}

int	rb_rra_best(t_stack *a, t_stack *b, int value)
{
	int	rb_move;
	int	rrb_move;
	int	ra_move;
	int	rra_move;

	rb_move = count_rb(b, value);
	rrb_move = count_rrb(b, value);
	ra_move = count_ra(a, value);
	rra_move = count_rra(a, value);
	if ((rb_move + rra_move) >= bigger(rb_move, ra_move))
		return (0);
	if ((rb_move + rra_move) > rrb_move + ra_move)
		return (0);
	if ((rb_move + rra_move) > bigger(rrb_move, rra_move))
		return (0);
	return (1);
}

int	rrb_ra_best(t_stack *a, t_stack *b, int value)
{
	int	rb_move;
	int	rrb_move;
	int	ra_move;
	int	rra_move;

	//printf("banana\n\n\n");
	rb_move = count_rb(b, value);
	rrb_move = count_rrb(b, value);
	ra_move = count_ra(a, value);
	rra_move = count_rra(a, value);
	//printf("count_rb:%d\ncount_rrb:%d\ncount_ra:%d\ncount_rra:%d\n", rb_move, rrb_move, ra_move, rra_move);
	if ((rrb_move + ra_move) >= bigger(rb_move, ra_move))
		return (0);
	if ((rrb_move + ra_move) >= rb_move + rra_move)
		return (0);
	if ((rrb_move + ra_move) > bigger(rrb_move, rra_move))
		return (0);
	return (1);
}

int	rrb_rra_best(t_stack *a, t_stack *b, int value)
{
	int	rb_move;
	int	rrb_move;
	int	ra_move;
	int	rra_move;

	rb_move = count_rb(b, value);
	rrb_move = count_rrb(b, value);
	ra_move = count_ra(a, value);
	rra_move = count_rra(a, value);
	if (bigger(rrb_move, rra_move) >= bigger(rb_move, ra_move))
		return (0);
	if (bigger(rrb_move, rra_move) >= rb_move + rra_move)
		return (0);
	if (bigger(rrb_move, rra_move) >= rrb_move + ra_move)
		return (0);
	return (1);
}
