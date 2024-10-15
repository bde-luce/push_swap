/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rev_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:49:21 by bde-luce          #+#    #+#             */
/*   Updated: 2024/10/15 14:49:21 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	op_rev_rotate(t_stack **head)
{
	t_stack	*temp;
	t_stack	*temp2;

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp2 = *head;
	while ((*head)->next->next != NULL)
		*head = (*head)->next;
	(*head)->next = NULL;
	temp->next = temp2;
	*head = temp;
}

void	rra(t_stack **a)
{
	op_rev_rotate(a);
	printf("rra\n");
}

void	rrb(t_stack **b)
{
	op_rev_rotate(b);
	printf("rrb\n");
}

void	rrr(t_stack **a, t_stack **b)
{
	op_rev_rotate(a);
	op_rev_rotate(b);
	printf("rrr\n");
}
