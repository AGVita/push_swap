/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minimal_value.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarquon <rzarquon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:44:16 by rzarquon          #+#    #+#             */
/*   Updated: 2022/06/17 14:54:24 by rzarquon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sorting_2(t_list **a)
{
	if ((*a)->index > (*a)->next->index)
		sa(a);
}

void	sorting_3(t_list **a)
{
	if ((*a)->index == max_value(a))
		ra(a);
	if ((*a)->index == min_value(a) && (*a)->next->index == max_value(a))
	{
		rra(a);
		sa(a);
	}
	if ((*a)->index != min_value(a) && (*a)->index > (*a)->next->index)
		sa(a);
	if ((*a)->index != min_value(a) && (*a)->index < (*a)->next->index)
		rra(a);
}

void	sorting_4(t_list **a, t_list **b)
{
	int	i;

	i = 0;
	while (i < 2)
	{
		if ((*a)->index > min_value(a) && !med(a, min_value(a), lol(a)))
			ra(a);
		else if ((*a)->index > min_value(a) && med(a, min_value(a), lol(a)))
			rra(a);
		else
		{
			pb(a, b);
			i++;
		}
	}
	if ((*a)->index != min_value(a))
		sa(a);
	while ((*b) != NULL)
		pa(a, b);
}

void	sorting_5(t_list **a, t_list **b)
{
	int	i;

	i = 0;
	while (i < 3)
	{
		if ((*a)->index > min_value(a) && !med(a, min_value(a), lol(a)))
			ra(a);
		else if ((*a)->index > min_value(a) && med(a, min_value(a), lol(a)))
			rra(a);
		else
		{
			pb(a, b);
			i++;
		}
	}
	if ((*a)->index != min_value(a))
		sa(a);
	while ((*b) != NULL)
		pa(a, b);
}
