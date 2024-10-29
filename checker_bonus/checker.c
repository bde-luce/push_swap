/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:10:53 by bde-luce          #+#    #+#             */
/*   Updated: 2024/10/24 16:25:48 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (!check_error(argc, argv))
		return (0);
	create_stack(argc, argv, &a);
	if (!checker(&a, &b))
	{
		ps_lstclear(&a);
		ps_lstclear(&b);
		return (0);
	}
	if (check_order(a) && b == NULL)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	ps_lstclear(&a);
	ps_lstclear(&b);
}
