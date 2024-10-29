/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:50:46 by bde-luce          #+#    #+#             */
/*   Updated: 2024/10/15 14:50:46 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	op_rotate(t_stack **head)
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

void	ra(t_stack **a)
{
	op_rotate(a);
	ft_printf("ra\n");
}

void	rb(t_stack **b)
{
	op_rotate(b);
	ft_printf("rb\n");
}

void	rr(t_stack **a, t_stack **b)
{
	op_rotate(a);
	op_rotate(b);
	ft_printf("rr\n");
}
