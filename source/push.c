/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarquon <rzarquon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 14:28:50 by rzarquon          #+#    #+#             */
/*   Updated: 2022/06/17 13:05:26 by rzarquon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pa(t_list **list_a, t_list **list_b)
{
	t_list	*a;

	a = *list_b;
	*list_b = a->next;
	a->next = *list_a;
	*list_a = a;
	write(1, "pa\n", 3);
}

void	pb(t_list **list_a, t_list **list_b)
{
	t_list	*a;

	a = *list_a;
	*list_a = (*list_a)->next;
	a->next = *list_b;
	*list_b = a;
	write(1, "pb\n", 3);
}
