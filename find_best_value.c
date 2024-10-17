/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_best_value.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:16:34 by bde-luce          #+#    #+#             */
/*   Updated: 2024/10/15 15:16:34 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	bigger(int a, int b)
{
	if (a >= b)
		return (a);
	return (b);
}

static int	min_move(t_stack *a, t_stack *b, int value)
{
	int	rb_move;
	int	rrb_move;
	int	ra_move;
	int	rra_move;
	int	min;

	rb_move = count_rb(b, value);
	rrb_move = count_rrb(b, value);
	ra_move = count_ra(a, value);
	rra_move = count_rra(a, value);
	min = bigger(rb_move, ra_move);
	if (min > bigger(rrb_move, rra_move))
		min = bigger(rrb_move, rra_move);
	if (min > (rb_move + rra_move))
		min = rb_move + rra_move;
	if (min > (rrb_move + ra_move))
		min = rrb_move + ra_move;
	return (min);
}

int	best_value(t_stack *a, t_stack *b)
{
	int		best;
	int		best_value;
	t_stack	*temp;

	temp = a;
	best_value = temp->content;
	best = min_move(a, b, best_value);
	while (temp != NULL)
	{
		if (best > min_move(a, b, temp->content))
		{
			best = min_move(a, b, temp->content);
			best_value = temp->content;
		}
		temp = temp->next;
	}
	return (best_value);
}
