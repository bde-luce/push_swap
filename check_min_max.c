/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_min_max.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:14:16 by bde-luce          #+#    #+#             */
/*   Updated: 2024/10/15 15:14:16 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_min(t_stack *b, int value)
{
	while (b != NULL)
	{
		if (value > b->content)
			return (0);
		b = b->next;
	}
	return (1);
}

int	check_max(t_stack *b, int value)
{
	while (b != NULL)
	{
		if (value < b->content)
			return (0);
		b = b->next;
	}
	return (1);
}

int	max_b(t_stack *b, int max_b)
{
	while (b != NULL)
	{
		if (max_b < b->content)
			max_b = b->content;
		b = b->next;
	}
	return (max_b);
}

int	min_a(t_stack *a)
{
	int	min;

	min = a->content;
	while (a != NULL)
	{
		if (min > a->content)
			min = a->content;
		a = a->next;
	}
	return (min);
}
