/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 15:51:38 by lrosa-do          #+#    #+#             */
/*   Updated: 2022/07/28 14:17:33 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_pa(t_list **b_lst, t_list **a_lst)
{
	t_list	*temp;

	if (*b_lst)
	{
		temp = (*b_lst)->next;
		(*b_lst)->next = *a_lst;
		*a_lst = *b_lst;
		*b_lst = temp;
		write (1, "pa\n", 3);
	}
}

void	push_pb(t_list **a_lst, t_list **b_lst)
{
	t_list	*temp;

	if (*a_lst)
	{
		temp = (*a_lst)->next;
		(*a_lst)->next = *b_lst;
		*b_lst = *a_lst;
		*a_lst = temp;
		write (1, "pb\n", 3);
	}
}
