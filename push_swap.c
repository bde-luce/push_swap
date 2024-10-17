/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-luce <bde-luce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 16:10:47 by bde-luce          #+#    #+#             */
/*   Updated: 2024/10/16 23:14:19 by bde-luce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (!check_error(argc, argv))
		return (0);
	create_stack(argc, argv, &a);
	order_stack(&a, &b);
	ps_lstclear(&a);
	ps_lstclear(&b);
}

/*void	operations(t_stack *a)
{
	t_stack	*b = NULL;
	t_stack	*ptr;
	t_stack	*ptr2;

	ptr = a;
	ptr2 = b;
	printf("a_inicial:\n");
	if (ptr == NULL)
		printf("a is empty\n");
	else
	{
		while (ptr != NULL)
		{
			printf("%d\n", ptr->content);
			ptr = ptr->next;
		}
	}
	printf("b_inicial:\n");
	if (ptr2 == NULL)
		printf("b is empty\n");
	else
	{
		while (ptr2 != NULL)
		{
			printf("%d\n", ptr2->content);
			ptr2 = ptr2->next;
		}
	}
	pb(&a, &b);
	pb(&a, &b);
	pb(&a, &b);
	rrb(&b);
	pb(&a, &b);
	rra(&a);
	pb(&a, &b);
	rrb(&b);
	rrb(&b);
	pb(&a, &b);
	pb(&a, &b);
	rrr(&a, &b);
	pb(&a, &b);
	ra(&a);
	rr(&a, &b);
	pb(&a, &b);
	ra(&a);
	rr(&a, &b);
	pb(&a, &b);
	rr(&a, &b);
	rr(&a, &b);
	pb(&a, &b);
	rb(&b);
	rb(&b);
	pb(&a, &b);
	pb(&a, &b);
	rrb(&b);
	pb(&a, &b);
	rb(&b);
	rb(&b);
	rr(&a, &b);
	rr(&a, &b);
	pb(&a, &b);
	rrb(&b);
	rrb(&b);
	ra(&a);
	pb(&a, &b);
	rb(&b);
	rb(&b);
	rb(&b);
	rb(&b);
	rb(&b);
	rr(&a, &b);
	pb(&a, &b);
	ra(&a);
	sa(&a);

	printf("best_value:%d\n", best_value(a, b));
	
	int	rb_move;
	int	rrb_move;
	int	ra_move;
	int	rra_move;
	int	rr_move;
	int	rrr_move;

	rb_move = final_nbr_rb(nbr_rb(a, b), nbr_ra(a, b));
	rrb_move = final_nbr_rrb(nbr_rrb(a, b), nbr_rra(a, b));
	ra_move = final_nbr_ra(nbr_ra(a, b), nbr_rb(a, b));
	rra_move = final_nbr_rra(nbr_rra(a, b), nbr_rrb(a, b));
	rr_move = final_nbr_rr(0, nbr_rb(a, b), nbr_ra(a, b));
	rrr_move = final_nbr_rrr(0, nbr_rrb(a, b), nbr_rra(a, b));
	printf("rb:%d\nrrb:%d\nra:%d\nrra:%d\nrr:%d\nrrr:%d\n", rb_move, rrb_move, ra_move, rra_move, rr_move, rrr_move);
	
	printf("next_value:%d\n", next_value(a, b->content));
	
	//printf("value:11\ncount_rb:%d\ncount_rrb:%d\ncount_ra:%d\ncount_rra:%d\n", count_rb(b, 11), count_rrb(b, 11), count_ra(a, 11), count_rra(a, 11));
	
	ptr = a;
	ptr2 = b;
	printf("a_final:\n");
	while (ptr != NULL)
	{
		printf("%d\n", ptr->content);
		ptr = ptr->next;
	}
	printf("b_final:\n");
	while (ptr2 != NULL)
	{
		printf("%d\n", ptr2->content);
		ptr2 = ptr2->next;
	}
}

int	main(int argc, char **argv)
{
	t_stack *a;
	int	i;
	
	a = NULL;
	if (argc < 2)
	{
		printf("ERROR");
		return (1);	
	}
	i = 1;
	while (i < argc)
		ps_lstadd_back(&a, ps_lstnew(ps_atoi(argv[i++])));
	operations(a);
}
*/