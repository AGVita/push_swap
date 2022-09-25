/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarquon <rzarquon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 14:26:38 by rzarquon          #+#    #+#             */
/*   Updated: 2022/05/26 14:26:58 by rzarquon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rra(t_list **list_a)
{
	t_list	*a;
	t_list	*b;

	a = *list_a;
	b = a;
	while (b->next->next)
		b = b->next;
	*list_a = b->next;
	b->next = NULL;
	(*list_a)->next = a;
	write (1, "rra\n", 4);
}

void	rrb(t_list **list_b)
{
	t_list	*a;
	t_list	*b;

	a = *list_b;
	b = a;
	while (b->next->next)
		b = b->next;
	*list_b = b->next;
	b->next = NULL;
	(*list_b)->next = a;
	write (1, "rrb\n", 4);
}

void	rrr(t_list **list_a, t_list **list_b)
{
	t_list	*a;
	t_list	*b;

	a = *list_a;
	b = a;
	while (b->next->next)
		b = b->next;
	*list_a = b->next;
	b->next = NULL;
	(*list_a)->next = a;
	a = *list_b;
	b = a;
	while (b->next->next)
		b = b->next;
	*list_b = b->next;
	b->next = NULL;
	(*list_b)->next = a;
	write (1, "rrr\n", 4);
}
