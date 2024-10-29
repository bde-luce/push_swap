/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_swap_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:37:54 by bde-luce          #+#    #+#             */
/*   Updated: 2024/10/23 15:26:34 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static void	op_swap_b(t_stack **head)
{
	t_stack	*temp;

	if (!(*head) || !((*head)->next))
		return ;
	temp = *head;
	*head = (*head)->next;
	temp->next = (*head)->next;
	(*head)->next = temp;
}

void	sa_b(t_stack **a)
{
	op_swap_b(a);
}

void	sb_b(t_stack **b)
{
	op_swap_b(b);
}

void	ss_b(t_stack **a, t_stack **b)
{
	op_swap_b(a);
	op_swap_b(b);
}
