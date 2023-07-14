/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_order.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 15:29:10 by lrosa-do          #+#    #+#             */
/*   Updated: 2022/07/28 15:38:20 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_exit(char *msg)
{
	ft_putendl_fd(msg, 2);
	exit(0);
}

int	is_num(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-')
		i++;
	if (str[i] == '\0')
		return (0);
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	check_duplicate(t_list *lst)
{
	t_list	*temp;

	while (lst)
	{
		temp = lst->next;
		while (temp)
		{
			if (lst->value == temp->value)
				error_exit("Error");
			temp = temp->next;
		}
		lst = lst->next;
	}
	return (0);
}

int	check_order(t_list *lst)
{
	int		check;
	t_list	*temp;

	if (!lst)
		return (1);
	check = 0;
	temp = lst;
	while (temp->next)
	{
		if (temp->value > temp->next->value)
			return (check);
		temp = temp->next;
	}
	check = 1;
	return (check);
}
