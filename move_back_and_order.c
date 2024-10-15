/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_back_and_order.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:22:15 by bde-luce          #+#    #+#             */
/*   Updated: 2024/10/15 15:22:15 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_order(t_stack *a)
{
	while (a->next != NULL)
	{
		if (a->content > a->next->content)
			return (0);
		a = a->next;
	}
	return (1);
}

void	order_last3(t_stack **a)
{
	int	x;
	int	y;
	int	z;

	while (!check_order(*a))
	{
		x = (*a)->content;
		y = (*a)->next->content;
		z = (*a)->next->next->content;
		if (x < z)
			sa(a);
		else if ((x > y && x > z))
			ra(a);
		else if (x < y && x > z)
			rra(a);
	}
}

int	next_value(t_stack *a, t_stack *b, int value)
{
	int	c;

	if (check_max(a, value) && check_max(b, value))
		c = a->content;
	else
	{
		while (a->content < value && a->next != NULL)
			a = a->next;
		if (a != NULL)
			c = a->content;
		while (a != NULL)
		{
			if (a->content > value && a->content < c)
				c = a->content;
			a = a->next;
		}
	}
	return (c);
}

void	make_move_back(t_stack **a, t_stack **b)
{
	int	ra_move_back;
	int	rra_move_back;

	ra_move_back = count_ra(*a, next_value(*a, *b, (*b)->content));
	rra_move_back = count_rra(*a, next_value(*a, *b, (*b)->content));
	if (ra_move_back < rra_move_back)
	{
		while (ra_move_back > 0)
		{
			ra(a);
			ra_move_back--;
		}
	}
	else
	{
		while (rra_move_back > 0)
		{
			rra(a);
			rra_move_back--;
		}
	}
}

void	final_order(t_stack **a)
{
	int	final_order_ra;
	int	final_order_rra;

	final_order_ra = count_ra(*a, min_a(*a));
	final_order_rra = count_rra(*a, min_a(*a));
	if (!check_order(*a))
	{
		if (final_order_ra < final_order_rra)
		{
			while (final_order_ra > 0)
			{
				ra(a);
				final_order_ra--;
			}
		}
		else
		{
			while (final_order_rra > 0)
			{
				rra(a);
				final_order_rra--;
			}
		}
	}
}
