/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_value.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarquon <rzarquon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 14:27:46 by rzarquon          #+#    #+#             */
/*   Updated: 2022/06/17 14:55:04 by rzarquon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	final_sorting(t_list **a, t_list **b)
{
	while ((*b) != NULL)
	{
		if (!b)
			break ;
		if ((*b)->index != max_value(b) && !med(b, max_value(b), lol(b)))
			rb(b);
		else if ((*b)->index != max_value(b) && med(b, max_value(b), lol(b)))
			rrb(b);
		else if ((*b)->index == max_value(b))
			pa(a, b);
	}
}

void	sorting_100(t_list **a, t_list **b)
{
	int	pointer;

	pointer = 0;
	while ((*a) != NULL)
	{
		if (pointer > 1 && (*a)->index <= pointer)
		{
			pb(a, b);
			rb(b);
			pointer++;
		}
		else if ((*a)->index <= pointer + 15)
		{
			pb(a, b);
			pointer++;
		}
		else if ((*a)->index >= pointer)
			ra(a);
	}
	final_sorting(a, b);
}

void	sorting_500(t_list **a, t_list **b)
{
	int	pointer;

	pointer = 0;
	while ((*a) != NULL)
	{
		if (pointer > 1 && (*a)->index <= pointer)
		{
			pb(a, b);
			rb(b);
			pointer++;
		}
		else if ((*a)->index <= pointer + 30)
		{
			pb(a, b);
			pointer++;
		}
		else if ((*a)->index >= pointer)
			ra(a);
	}
	final_sorting(a, b);
}
