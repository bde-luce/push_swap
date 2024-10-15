/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 13:30:05 by bde-luce          #+#    #+#             */
/*   Updated: 2024/10/15 15:00:56 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ps_atol(const char *nptr)
{
	long	i;
	long	s;
	long	r;

	i = 0;
	s = 1;
	r = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == 43 || nptr[i] == 45)
	{
		if (nptr[i] == 45)
			s = -1;
		i++;
	}
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		r = r * 10 + (nptr[i] -48);
		i++;
	}
	r *= s;
	return (r);
}

int	ps_atoi(const char *nptr)
{
	int	i;
	int	s;
	int	r;

	i = 0;
	s = 1;
	r = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == 43 || nptr[i] == 45)
	{
		if (nptr[i] == 45)
			s = -1;
		i++;
	}
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		r = r * 10 + (nptr[i] -48);
		i++;
	}
	r *= s;
	return (r);
}
