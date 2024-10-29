/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rotate_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:37:20 by bde-luce          #+#    #+#             */
/*   Updated: 2024/10/29 13:21:13 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static void	op_rotate_b(t_stack **head)
{
	t_stack	*temp;
	t_stack	*temp2;

	if (ps_lstsize(*head) > 1)
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp2 = *head;
		*head = (*head)->next;
		temp->next = temp2;
		temp2->next = NULL;
	}
}

void	ra_b(t_stack **a)
{
	op_rotate_b(a);
}

void	rb_b(t_stack **b)
{
	op_rotate_b(b);
}

void	rr_b(t_stack **a, t_stack **b)
{
	op_rotate_b(a);
	op_rotate_b(b);
}
