/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 10:45:32 by lrosa-do          #+#    #+#             */
/*   Updated: 2022/07/29 19:14:01 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				value;
	int				order;
	struct s_list	*next;
}		t_list;

void		error_exit(char *msg);

int			is_num(char *str);

size_t		ft_strlen(const char *s);

int			ft_isdigit(int c);

int			check_duplicate(t_list *lst);

char		**ft_split(char const *s, char c);
int			ft_isdigit(int c);
long		ft_atoi(const char *str);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);

void		init_order(t_list *lst);
int			check_order(t_list *lst);
t_list		**filling_stack(t_list **lst, int argc, char **argv);

void		swap_sa(t_list **lst);
void		swap_sb(t_list **lst);
void		push_ss(t_list **a_lst, t_list **b_lst);
void		push_pa(t_list **b_lst, t_list **a_lst);
void		push_pb(t_list **a_lst, t_list **b_lst);
void		rotate_ra(t_list **lst);
void		rotate_rb(t_list **lst);
void		rotate_rr(t_list **a_lst, t_list **b_lst);
void		rotate_rra(t_list **lst);
void		rotate_rrb(t_list **lst);
void		rotate_rrr(t_list **a_lst, t_list **b_lst);

t_list		*ft_lstnew(int value);
void		ft_lstadd_front(t_list **lst, t_list *new);
int			ft_lstsize(t_list *lst);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstdelone(t_list *lst, void (*del)(int));
void		ft_lstclear(t_list **lst, void (*del)(int));
void		ft_lstiter(t_list *lst, void (*f)(int));
t_list		*ft_lstmap(t_list *lst, void *(*f)(int), void (*del)(int));
t_list		*ft_lstindex(t_list *lst, int index);
void		ft_freelst(t_list *lst);

int			get_min_value(t_list *lst);
int			get_max_value(t_list *lst);
int			get_min_index(t_list *lst);

void		sort_radix(t_list **a_lst, t_list **b_list);
void		sort_three(t_list **lst);
void		sort_med(t_list **a_lst, t_list **b_lst);

#endif
