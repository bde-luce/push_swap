/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:51:15 by bde-luce          #+#    #+#             */
/*   Updated: 2024/10/15 14:51:15 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	op_swap(t_stack **head)
{
	t_stack	*temp;

	if (!(*head) || !((*head)->next))
		return ;
	temp = *head;
	*head = (*head)->next;
	temp->next = (*head)->next;
	(*head)->next = temp;
}

void	sa(t_stack **a)
{
	op_swap(a);
	printf("sa\n");
}

void	sb(t_stack **b)
{
	op_swap(b);
	printf("sb\n");
}

void	ss(t_stack **a, t_stack **b)
{
	op_swap(a);
	op_swap(b);
	printf("ss\n");
}
