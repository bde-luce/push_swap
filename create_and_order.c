/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_and_order.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:24:24 by bde-luce          #+#    #+#             */
/*   Updated: 2024/10/15 15:24:24 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	create_stack(int argc, char **argv, t_stack **a)
{
	int	i;

	i = 1;
	while (i < argc)
		ps_lstadd_back(a, ps_lstnew(ps_atoi(argv[i++])));
}

void	order_stack(t_stack **a, t_stack **b)
{
	if (!check_order(*a))
	{
		if (ps_lstsize(*a) == 2)
			sa(a);
		else if (ps_lstsize(*a) > 3)
		{
			pb(a, b);
			pb(a, b);
			while (ps_lstsize(*a) > 3)
			{
				make_move(a, b);
				pb(a, b);
			}
		}
		order_last3(a);
		while ((*b) != NULL)
		{
			make_move_back(a, b);
			pa(a, b);
		}
		final_order(a);
	}
}
