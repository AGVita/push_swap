/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarquon <rzarquon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 14:22:06 by rzarquon          #+#    #+#             */
/*   Updated: 2022/06/17 15:09:40 by rzarquon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(t_list **list_a)
{
	t_list	*a;
	t_list	*b;

	a = *list_a;
	b = *list_a;
	*list_a = (*list_a)->next;
	while (a->next)
		a = a->next;
	b->next = NULL;
	a->next = b;
	write(1, "ra\n", 3);
}

void	rb(t_list **list_a)
{
	t_list	*a;
	t_list	*b;

	a = *list_a;
	b = *list_a;
	*list_a = (*list_a)->next;
	while (a->next)
		a = a->next;
	b->next = NULL;
	a->next = b;
	write(1, "rb\n", 3);
}

void	rr(t_list	**list_a, t_list	**list_b)
{
	t_list	*a;
	t_list	*b;

	a = *list_b;
	b = *list_b;
	*list_b = (*list_b)->next;
	while (a->next)
		a = a->next;
	a->next = b;
	b->next = NULL;
	a = *list_a;
	b = *list_a;
	*list_a = (*list_a)->next;
	while (a->next)
		a = a->next;
	a->next = b;
	b->next = NULL;
	write(1, "rr\n", 3);
}
