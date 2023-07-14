/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 16:22:03 by lrosa-do          #+#    #+#             */
/*   Updated: 2022/07/28 14:35:49 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_ra(t_list **lst)
{
	t_list	*temp;

	if (ft_lstsize(*lst) > 1)
	{
		temp = (*lst)->next;
		ft_lstlast(*lst)->next = *lst;
		(*lst)->next = 0;
		*lst = temp;
		write (1, "ra\n", 3);
	}
}

void	rotate_rb(t_list **lst)
{
	t_list	*temp;

	if (ft_lstsize(*lst) > 1)
	{
		temp = (*lst)->next;
		ft_lstlast(*lst)->next = *lst;
		(*lst)->next = 0;
		*lst = temp;
		write (1, "rb\n", 3);
	}
}

void	rotate_rr(t_list **a_lst, t_list **b_lst)
{
	t_list	*temp;
	int		check;

	check = 0;
	if (ft_lstsize(*a_lst) > 1)
	{
		temp = (*a_lst)->next;
		ft_lstlast(*a_lst)->next = *a_lst;
		(*a_lst)->next = 0;
		*a_lst = temp;
		check = 1;
	}
	if (ft_lstsize(*b_lst) > 1)
	{
		temp = (*b_lst)->next;
		ft_lstlast(*b_lst)->next = *b_lst;
		(*b_lst)->next = 0;
		*b_lst = temp;
		check = 1;
	}
	if (check == 1)
		write (1, "rr\n", 1);
}
