/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_push_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:35:19 by bde-luce          #+#    #+#             */
/*   Updated: 2024/10/24 15:40:58 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static void	op_push_b(t_stack **head1, t_stack **head2)
{
	t_stack	*temp;

	if (*head1 == NULL)
		return ;
	temp = *head1;
	*head1 = (*head1)->next;
	temp->next = *head2;
	*head2 = temp;
}

void	pa_b(t_stack **a, t_stack **b)
{
	op_push_b(b, a);
}

void	pb_b(t_stack **a, t_stack **b)
{
	op_push_b(a, b);
}
