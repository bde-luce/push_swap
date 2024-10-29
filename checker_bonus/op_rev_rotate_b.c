/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rev_rotate_b.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:36:36 by bde-luce          #+#    #+#             */
/*   Updated: 2024/10/29 13:21:08 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static void	op_rev_rotate_b(t_stack **head)
{
	t_stack	*temp;
	t_stack	*temp2;

	if (ps_lstsize(*head) > 1)
	{
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
}

void	rra_b(t_stack **a)
{
	op_rev_rotate_b(a);
}

void	rrb_b(t_stack **b)
{
	op_rev_rotate_b(b);
}

void	rrr_b(t_stack **a, t_stack **b)
{
	op_rev_rotate_b(a);
	op_rev_rotate_b(b);
}
