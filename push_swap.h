/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 16:12:03 by bde-luce          #+#    #+#             */
/*   Updated: 2024/10/15 14:58:38 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>

typedef struct s_stack
{
	int				content;
	struct s_stack	*next;
}t_stack;

long	ps_atol(const char *nptr);
int		ps_atoi(const char *nptr);
t_stack	*ps_lstnew(int content);
void	ps_lstadd_back(t_stack **lst, t_stack *new);
t_stack	*ps_lstlast(t_stack *lst);
int		ps_lstsize(t_stack *lst);
void	ps_lstclear(t_stack **lst);
void	swap(t_stack *stack);
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);

#endif