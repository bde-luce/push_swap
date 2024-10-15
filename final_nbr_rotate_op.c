/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final_nbr_rotate_op.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:19:08 by bde-luce          #+#    #+#             */
/*   Updated: 2024/10/15 15:19:08 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	final_nbr_rb(int rb_move, int ra_move)
{
	if (rb_move >= ra_move)
		rb_move -= ra_move;
	else
		rb_move = 0;
	return (rb_move);
}

int	final_nbr_ra(int ra_move, int rb_move)
{
	if (ra_move <= rb_move)
		ra_move = 0;
	else
		ra_move -= rb_move;
	return (ra_move);
}

int	final_nbr_rr(int rr_move, int ra_move, int rb_move)
{
	if (rb_move >= ra_move)
		rr_move = ra_move;
	else
		rr_move = rb_move;
	return (rr_move);
}
