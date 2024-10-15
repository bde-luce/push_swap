/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_move.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:20:49 by bde-luce          #+#    #+#             */
/*   Updated: 2024/10/15 15:20:49 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	make_firstmoves(t_stack **a, t_stack **b)
{
	int	rb_move;
	int	rrb_move;
	int	ra_move;

	rb_move = final_nbr_rb(nbr_rb(*a, *b), nbr_ra(*a, *b));
	rrb_move = final_nbr_rrb(nbr_rrb(*a, *b), nbr_rra(*a, *b));
	ra_move = final_nbr_ra(nbr_ra(*a, *b), nbr_rb(*a, *b));
	while (rb_move > 0)
	{
		rb(b);
		rb_move--;
	}
	while (rrb_move > 0)
	{
		rrb(b);
		rrb_move--;
	}
	while (ra_move > 0)
	{
		ra(a);
		ra_move--;
	}
}

void	make_secondmoves(t_stack **a, t_stack **b)
{
	int	rra_move;
	int	rr_move;
	int	rrr_move;

	rra_move = final_nbr_rra(nbr_rra(*a, *b), nbr_rrb(*a, *b));
	rr_move = final_nbr_rr(0, nbr_rb(*a, *b), nbr_ra(*a, *b));
	rrr_move = final_nbr_rrr(0, nbr_rrb(*a, *b), nbr_rra(*a, *b));
	while (rra_move > 0)
	{
		rra(a);
		rra_move--;
	}
	while (rr_move > 0)
	{
		rr(a, b);
		rr_move--;
	}
	while (rrr_move > 0)
	{
		rrr(a, b);
		rrr_move--;
	}
}

void	make_move(t_stack **a, t_stack **b)
{
	make_firstmoves(a, b);
	make_secondmoves(a, b);
}
