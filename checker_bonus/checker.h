/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:14:20 by bde-luce          #+#    #+#             */
/*   Updated: 2024/10/23 17:15:37 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "get_next_line/get_next_line.h"
# include "../push_swap.h"

void	sa_b(t_stack **a);
void	sb_b(t_stack **b);
void	ss_b(t_stack **a, t_stack **b);
void	pa_b(t_stack **a, t_stack **b);
void	pb_b(t_stack **a, t_stack **b);
void	ra_b(t_stack **a);
void	rb_b(t_stack **b);
void	rr_b(t_stack **a, t_stack **b);
void	rra_b(t_stack **a);
void	rrb_b(t_stack **b);
void	rrr_b(t_stack **a, t_stack **b);

int		checker(t_stack **a, t_stack **b);

#endif