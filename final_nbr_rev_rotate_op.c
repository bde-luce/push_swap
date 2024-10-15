/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final_nbr_rev_rotate_op.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:20:11 by bde-luce          #+#    #+#             */
/*   Updated: 2024/10/15 15:20:11 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	final_nbr_rrb(int rrb_move, int rra_move)
{
	if (rrb_move >= rra_move)
		rrb_move -= rra_move;
	else
		rrb_move = 0;
	return (rrb_move);
}

int	final_nbr_rra(int rra_move, int rrb_move)
{
	if (rra_move <= rrb_move)
		rra_move = 0;
	else
		rra_move -= rrb_move;
	return (rra_move);
}

int	final_nbr_rrr(int rrr_move, int rra_move, int rrb_move)
{
	if (rrb_move >= rra_move)
		rrr_move = rra_move;
	else
		rrr_move = rrb_move;
	return (rrr_move);
}
