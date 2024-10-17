/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:49:45 by bde-luce          #+#    #+#             */
/*   Updated: 2024/10/15 14:49:45 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	op_push(t_stack **head1, t_stack **head2)
{
	t_stack	*temp;

	temp = *head1;
	*head1 = (*head1)->next;
	temp->next = *head2;
	*head2 = temp;
}

void	pa(t_stack **a, t_stack **b)
{
	op_push(b, a);
	ft_printf("pa\n");
}

void	pb(t_stack **a, t_stack **b)
{
	op_push(a, b);
	ft_printf("pb\n");
}
