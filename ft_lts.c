/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lts.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 16:22:03 by lrosa-do          #+#    #+#             */
/*   Updated: 2022/07/28 15:43:27 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (*lst)
	{
		tmp = *lst;
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
	}
	else
	{
		*lst = new;
	}
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

void	ft_lstclear(t_list **lst, void (*del)(int))
{
	t_list	*old_elem;

	while (*lst)
	{
		del((*lst)->value);
		old_elem = *lst;
		*lst = old_elem->next;
		free(old_elem);
	}
	*lst = NULL;
}

t_list	*ft_lstnew(int value)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(*new));
	if (!new)
		exit(EXIT_FAILURE);
	new->value = value;
	new->order = -1;
	new->next = NULL;
	return (new);
}

t_list	*ft_lstindex(t_list *lst, int index)
{
	t_list	*temp;
	int		i;

	if (index > ft_lstsize(lst))
		return (ft_lstlast(lst));
	i = 1;
	temp = lst;
	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
