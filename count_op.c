/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:15:10 by bde-luce          #+#    #+#             */
/*   Updated: 2024/10/15 15:15:10 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_value_is_next(t_stack *b, int value)
{
	if (value > b->content || value < b->next->content)
		return (0);
	return (1);
}

int	count_rb(t_stack *b, int value)
{
	int	moves;

	moves = 0;
	if (check_min(b, value) || check_max(b, value))
	{
		while ((b->content < max(b, b->content)))
		{
			moves++;
			b = b->next;
		}
	}
	else if (b->content > value || ps_lstlast(b)->content < value)
	{
		moves = 1;
		while (check_value_is_next(b, value) == 0)
		{
			moves++;
			b = b->next;
		}
	}
	return (moves);
}

int	count_rrb(t_stack *b, int value)
{
	int	moves;

	moves = 0;
	if (check_min(b, value) || check_max(b, value))
	{
		while ((b->content < max(b, b->content)))
			b = b->next;
		while (b != NULL)
		{
			moves++;
			b = b->next;
		}
	}
	else if (b->content > value || ps_lstlast(b)->content < value)
	{
		while (!check_value_is_next(b, value) && (b->next->next != NULL))
			b = b->next;
		while (b->next != NULL)
		{
			moves++;
			b = b->next;
		}
	}
	return (moves);
}

int	count_ra(t_stack *a, int value)
{
	int	moves;

	moves = 0;
	while (a->content != value)
	{
		moves++;
		a = a->next;
	}
	return (moves);
}

int	count_rra(t_stack *a, int value)
{
	int	moves;

	moves = 0;
	while (a->content != value)
		a = a->next;
	while (a != NULL)
	{
		moves++;
		a = a->next;
	}
	return (moves);
}
