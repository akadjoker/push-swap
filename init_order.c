/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_order.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:49:41 by lrosa-do          #+#    #+#             */
/*   Updated: 2022/07/28 15:38:20 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_min_partial(t_list *lst)
{
	int		min;
	t_list	*temp;

	temp = lst;
	while (temp && temp->order != -1)
		temp = temp->next;
	min = temp->value;
	while (temp->next)
	{
		if (temp->next->value < min && temp->next->order == -1)
			min = temp->next->value;
		temp = temp->next;
	}
	return (min);
}

void	init_order(t_list *lst)
{
	int		min_partial;
	int		len;
	int		order;
	t_list	*temp;

	len = ft_lstsize(lst);
	order = 1;
	while (order <= len)
	{
		temp = lst;
		min_partial = get_min_partial(lst);
		while (temp)
		{
			if (temp->value == min_partial)
				temp->order = order;
			temp = temp->next;
		}
		order++;
	}
}
