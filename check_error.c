/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:22:54 by bde-luce          #+#    #+#             */
/*   Updated: 2024/10/15 15:22:54 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_int(int argc, char **argv, int i)
{
	int	j;

	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (j == 0 && (argv[i][j] == '-' || argv[i][j] == '+'))
				j++;
			if ((argv[i][j] >= '0' && argv[i][j] <= '9') || argv[i][j] == 32)
				j++;
			else
				return (0);
		}
		i++;
	}
	return (1);
}

static int	check_lim(int argc, char **argv, int i)
{
	long	num;

	while (i < argc)
	{
		num = ps_atol(argv[i]);
		if (num > INT_MAX || num < INT_MIN)
			return (0);
		i++;
	}
	return (1);
}

static int	check_dup(int argc, char **argv, int i)
{
	int	j;

	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ps_atoi(argv[i]) == ps_atoi(argv[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check_all(int argc, char **argv, int i)
{
	if (check_int(argc, argv, i))
	{
		if (check_lim(argc, argv, i))
		{
			if (check_dup(argc, argv, i))
				return (1);
		}
	}
	return (0);
}

int	check_error(int argc, char **argv)
{
	int		x;
	int		f;
	int		s;
	char	**split;

	if (argc < 2)
		return (0);
	if (argc == 2)
	{
		x = 0;
		s = count_del(argv[1], ' ');
		split = ft_split(argv[1], ' ');
		if (check_all(s, split, 0))
			x = 1;
		f = 0;
		while (split[f])
			free(split[f++]);
		free(split);
		if (x == 1)
			return (1);
	}
	else if (check_all(argc, argv, 1))
		return (1);
	write(2, "Error\n", 6);
	return (0);
}
