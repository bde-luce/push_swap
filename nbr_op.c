/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbr_op.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:18:10 by bde-luce          #+#    #+#             */
/*   Updated: 2024/10/15 15:18:10 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	nbr_rb(t_stack *a, t_stack *b)
{
	int	rb_move;

	rb_move = 0;
	if (rb_ra_best(a, b, best_value(a, b)))
		rb_move = count_rb(b, best_value(a, b));
	else if (rb_rra_best(a, b, best_value(a, b)))
		rb_move = count_rb(b, best_value(a, b));
	return (rb_move);
}

int	nbr_ra(t_stack *a, t_stack *b)
{
	int	ra_move;

	ra_move = 0;
	if (rb_ra_best(a, b, best_value(a, b)))
		ra_move = count_ra(a, best_value(a, b));
	else if (rrb_ra_best(a, b, best_value(a, b)))
		ra_move = count_ra(a, best_value(a, b));
	return (ra_move);
}

int	nbr_rrb(t_stack *a, t_stack *b)
{
	int	rrb_move;

	rrb_move = 0;
	if (rrb_ra_best(a, b, best_value(a, b)))
		rrb_move = count_rrb(b, best_value(a, b));
	else if (rrb_rra_best(a, b, best_value(a, b)))
		rrb_move = count_rrb(b, best_value(a, b));
	return (rrb_move);
}

int	nbr_rra(t_stack *a, t_stack *b)
{
	int	rra_move;

	rra_move = 0;
	if (rb_rra_best(a, b, best_value(a, b)))
		rra_move = count_rra(a, best_value(a, b));
	else if (rrb_rra_best(a, b, best_value(a, b)))
		rra_move = count_rra(a, best_value(a, b));
	return (rra_move);
}
