/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:54:49 by lrosa-do          #+#    #+#             */
/*   Updated: 2022/07/28 15:38:20 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_list **lst)
{
	int	min;
	int	max;

	min = get_min_value(*lst);
	max = get_max_value(*lst);
	if ((*lst)->value == min && (*lst)->next->value == max)
	{
		swap_sa(lst);
		rotate_ra(lst);
	}
	else if ((*lst)->next->value == min && (ft_lstlast(*lst))->value == max)
		swap_sa(lst);
	else if ((*lst)->next->value == max && (ft_lstlast(*lst))->value == min)
		rotate_rra(lst);
	else if ((*lst)->value == max && (*lst)->next->value == min)
		rotate_ra(lst);
	else if ((*lst)->value == max && (ft_lstlast(*lst))->value == min)
	{
		rotate_ra(lst);
		swap_sa(lst);
	}
}

void	sort_med(t_list **a_lst, t_list **b_lst)
{
	int	min_index;

	if (ft_lstsize(*a_lst) == 2)
	{
		rotate_ra(a_lst);
		return ;
	}
	while (ft_lstsize(*a_lst) != 3)
	{
		min_index = get_min_index(*a_lst);
		if (min_index == 0)
			push_pb(a_lst, b_lst);
		else if (min_index <= (ft_lstsize(*a_lst) / 2))
			rotate_ra(a_lst);
		else
			rotate_rra(a_lst);
	}
	sort_three(a_lst);
	while (ft_lstsize(*b_lst) != 0)
		push_pa(b_lst, a_lst);
}

static int	get_packsize(int lst_len)
{
	if (lst_len <= 63)
		return (6);
	if (lst_len <= 127)
		return (7);
	if (lst_len <= 255)
		return (8);
	if (lst_len <= 511)
		return (9);
	if (lst_len <= 1023)
		return (10);
	if (lst_len <= 2047)
		return (11);
	return (32);
}

void	sort_radix(t_list **a_lst, t_list **b_lst)
{
	int		i;
	int		bit;
	int		len_a;
	int		bit_max;

	bit = -1;
	len_a = ft_lstsize(*a_lst);
	bit_max = get_packsize(len_a);
	while (++bit < bit_max)
	{
		i = 1;
		while (i <= len_a)
		{
			if (((*a_lst)->order >> bit) % 2 == 0)
				push_pb(a_lst, b_lst);
			else
				rotate_ra(a_lst);
			i++;
		}
		while (*b_lst)
			push_pa(b_lst, a_lst);
	}
}
