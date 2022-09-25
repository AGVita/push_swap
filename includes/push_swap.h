/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarquon <rzarquon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 19:00:22 by rzarquon          #+#    #+#             */
/*   Updated: 2022/06/21 14:44:01 by rzarquon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;
}				t_list;

void	push_a(t_list **list_a, int value);
void	pa(t_list **list_a, t_list **list_b);
void	pb(t_list **list_a, t_list **list_b);
void	sa(t_list **list_a);
void	sb(t_list **list_b);
void	ss(t_list **list_a, t_list **list_b);
void	ra(t_list **list_a);
void	rb(t_list **list_a);
void	rr(t_list **list_a, t_list **list_b);
void	rra(t_list **list_a);
void	rrb(t_list **list_b);
void	rrr(t_list **list_a, t_list **list_b);

void	sorting_2(t_list **a);
void	sorting_3(t_list **a);
void	sorting_4(t_list **a, t_list **b);
void	sorting_5(t_list **a, t_list **b);
void	sorting_100(t_list **a, t_list **b);
void	sorting_500(t_list **a, t_list **b);
void	final_sorting(t_list **a, t_list **b);

void	repeat_check(t_list **list, int argc);
int		make_arr(t_list *list, int	*mass);
int		make_arr2(t_list *list, int	*mass);
int		copy_arr(int *mass1, int *mass2, int len);
void	do_error_with_free(int	*mass);
void	do_error(void);
int		check_num(char *str, int i, int pom);
int		ft_atoi(char *str);
int		index_by_symbol(int	*mass1, int mass2);
int		sort_arr_for_index(int *mass1, int len);
void	make_indexes(t_list **a, int i);
int		sort_arr_for_index(int *mass1, int len);
int		check_sort(t_list *a);
void	sort(t_list	**a, t_list	**b, int count);
int		max_value(t_list **a);
int		min_value(t_list **a);
int		med(t_list **a, int mediana, int i);
int		lol(t_list **a);
void	ft_lstclear(t_list **lst);
size_t	ft_strlen(const char *s);

#endif