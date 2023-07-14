/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:48:29 by lrosa-do          #+#    #+#             */
/*   Updated: 2022/07/29 19:09:38 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	**filling_stack(t_list **lst, int argc, char **argv)
{
	char	**str;
	int		i;
	int		j;

	i = 1;
	while (i < argc)
	{
		j = -1;
		str = ft_split(argv[i], ' ');
		while (str[++j])
		{
			if (ft_atoi(str[j]) < -2147483648 || ft_atoi(str[j]) > 2147483647)
				error_exit("Error");
			else if (is_num(str[j]) == 1)
			{
				ft_lstadd_back(lst, ft_lstnew(ft_atoi(str[j])));
				free(str[j]);
			}
			else
				error_exit("Error");
		}
		free(str);
		i++;
	}
	return (0);
}

void	ft_freelst(t_list *lst)
{
	t_list	*temp1;
	t_list	*temp2;

	temp1 = lst;
	while (temp1)
	{
		temp2 = temp1->next;
		free(temp1);
		temp1 = temp2;
	}
}

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (!(lst->next))
		{
			return (lst);
		}
		lst = lst->next;
	}
	return (lst);
}
