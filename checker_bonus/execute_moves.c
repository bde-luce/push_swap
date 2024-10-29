/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_moves.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:25:25 by bde-luce          #+#    #+#             */
/*   Updated: 2024/10/24 15:40:47 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && (s1[i] - s2[i]) == 0)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

static char	*execute_moves(t_stack **a, t_stack **b, char *line)
{
	if (ft_strcmp(line, "sa\n") == 0)
		sa_b(a);
	else if (ft_strcmp(line, "sb\n") == 0)
		sb_b(b);
	else if (ft_strcmp(line, "ss\n") == 0)
		ss_b(a, b);
	else if (ft_strcmp(line, "pa\n") == 0)
		pa_b(a, b);
	else if (ft_strcmp(line, "pb\n") == 0)
		pb_b(a, b);
	else if (ft_strcmp(line, "ra\n") == 0)
		ra_b(a);
	else if (ft_strcmp(line, "rb\n") == 0)
		rb_b(b);
	else if (ft_strcmp(line, "rr\n") == 0)
		rr_b(a, b);
	else if (ft_strcmp(line, "rra\n") == 0)
		rra_b(a);
	else if (ft_strcmp(line, "rrb\n") == 0)
		rrb_b(b);
	else if (ft_strcmp(line, "rrr\n") == 0)
		rrr_b(a, b);
	else
		line = NULL;
	return (line);
}

int	checker(t_stack **a, t_stack **b)
{
	char	*line;

	line = get_next_line(0);
	while (line)
	{
		if (!execute_moves(a, b, line))
		{
			free(line);
			write(2, "Error\n", 6);
			return (0);
		}
		free(line);
		line = get_next_line(0);
	}
	free(line);
	return (1);
}
