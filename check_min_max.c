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

int	max(t_stack *lst, int max)
{
	while (lst != NULL)
	{
		if (max < lst->content)
			max = lst->content;
		lst = lst->next;
	}
	return (max);
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
