/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:53:03 by lrosa-do          #+#    #+#             */
/*   Updated: 2022/07/28 14:15:42 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_rra(t_list **lst)
{
	t_list	*temp;

	temp = ft_lstindex(*lst, ft_lstsize(*lst) - 1);
	temp->next->next = *lst;
	*lst = temp->next;
	temp->next = 0;
	write (1, "rra\n", 4);
}

void	rotate_rrb(t_list **lst)
{
	t_list	*temp;

	temp = ft_lstindex(*lst, ft_lstsize(*lst) - 1);
	temp->next->next = *lst;
	*lst = temp->next;
	temp->next = 0;
	write (1, "rrb\n", 4);
}

void	rotate_rrr(t_list **a_lst, t_list **b_lst)
{
	t_list	*a_temp;
	t_list	*b_temp;

	a_temp = ft_lstindex(*a_lst, ft_lstsize(*a_lst) - 1);
	a_temp->next->next = *a_lst;
	*a_lst = a_temp->next;
	a_temp->next = 0;
	b_temp = ft_lstindex(*b_lst, ft_lstsize(*b_lst) - 1);
	b_temp->next->next = *b_lst;
	*b_lst = b_temp->next;
	b_temp->next = 0;
	write (1, "rrr\n", 4);
}
