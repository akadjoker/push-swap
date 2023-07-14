/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:51:18 by lrosa-do          #+#    #+#             */
/*   Updated: 2022/07/28 14:22:40 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_sa(t_list **lst)
{
	t_list	*temp;

	if (ft_lstsize(*lst) > 1)
	{
		temp = (*lst)->next->next;
		(*lst)->next->next = *lst;
		(*lst) = (*lst)->next;
		(*lst)->next->next = temp;
		write (1, "sa\n", 3);
	}
}

void	swap_sb(t_list **lst)
{
	t_list	*temp;

	if (ft_lstsize(*lst) > 1)
	{
		temp = (*lst)->next->next;
		(*lst)->next->next = *lst;
		(*lst) = (*lst)->next;
		(*lst)->next->next = temp;
		write (1, "sb\n", 3);
	}
}

void	swap_ss(t_list **a_lst, t_list **b_lst)
{
	swap_sa(a_lst);
	swap_sb(b_lst);
}
