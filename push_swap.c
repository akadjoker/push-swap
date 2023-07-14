/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:47:10 by lrosa-do          #+#    #+#             */
/*   Updated: 2022/07/29 19:24:49 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*a_stack;
	t_list	*b_stack;
	int		int_numbers;
	int		check;

	a_stack = 0;
	b_stack = 0;
	filling_stack(&a_stack, argc, argv);
	check_duplicate(a_stack);
	init_order(a_stack);
	int_numbers = ft_lstsize(a_stack);
	check = check_order(a_stack);
	if (check == 1)
	{
		ft_freelst(a_stack);
		return (0);
	}
	else if (int_numbers == 3)
		sort_three(&a_stack);
	else if (int_numbers <= 62)
		sort_med(&a_stack, &b_stack);
	else
		sort_radix(&a_stack, &b_stack);
	ft_freelst(a_stack);
	return (0);
}
