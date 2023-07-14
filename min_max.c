/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_max.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:53:52 by lrosa-do          #+#    #+#             */
/*   Updated: 2022/07/28 15:38:20 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_min_value(t_list *lst)
{
	t_list	*temp;
	int		min;

	min = lst->value;
	temp = lst;
	while (temp->next)
	{
		if (temp->next->value < min)
			min = temp->next->value;
		temp = temp->next;
	}
	return (min);
}

int	get_max_value(t_list *lst)
{
	t_list	*temp;
	int		max;

	max = lst->value;
	temp = lst;
	while (temp->next)
	{
		if (temp->next->value > max)
			max = temp->next->value;
		temp = temp->next;
	}
	return (max);
}

int	get_min_index(t_list *lst)
{
	t_list	*temp;
	int		min_value;
	int		i;

	i = -1;
	if (!lst)
		return (i);
	min_value = get_min_value(lst);
	temp = lst;
	while (temp->next)
	{
		i++;
		if (temp->value == min_value)
			return (i);
		temp = temp->next;
	}
	return (i);
}
