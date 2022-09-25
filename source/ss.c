/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarquon <rzarquon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 14:24:27 by rzarquon          #+#    #+#             */
/*   Updated: 2022/05/26 14:25:20 by rzarquon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_list **list_a)
{
	t_list	*a;
	t_list	*b;

	a = *list_a;
	b = a->next->next;
	*list_a = (*list_a)->next;
	(*list_a)->next = a;
	(*list_a)->next->next = b;
	write (1, "sa\n", 3);
}

void	sb(t_list **list_b)
{
	t_list	*a;
	t_list	*b;

	a = *list_b;
	b = a->next->next;
	*list_b = (*list_b)->next;
	(*list_b)->next = a;
	(*list_b)->next->next = b;
	write (1, "sb\n", 3);
}

void	ss(t_list **list_a, t_list	**list_b)
{
	t_list	*a;
	t_list	*b;

	a = *list_a;
	b = a->next->next;
	*list_a = (*list_a)->next;
	(*list_a)->next = a;
	(*list_a)->next->next = b;
	a = *list_b;
	b = a->next->next;
	*list_b = (*list_b)->next;
	(*list_b)->next = a;
	(*list_b)->next->next = b;
	write (1, "ss\n", 3);
}
