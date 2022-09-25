/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarquon <rzarquon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 15:05:18 by rzarquon          #+#    #+#             */
/*   Updated: 2022/06/17 14:52:27 by rzarquon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	check_sort(t_list *a)
{
	while (a->next != NULL)
	{
		if ((a->index + 1) == a->next->index)
			a = a->next;
		else
			return (1);
	}
	return (0);
}

void	sort(t_list	**a, t_list	**b, int count)
{
	if (count == 2)
		sorting_2(a);
	if (count == 3)
		sorting_3(a);
	if (count == 4)
		sorting_4(a, b);
	if (count == 5)
		sorting_5(a, b);
	if (count > 5 && count <= 100)
		sorting_100(a, b);
	if (count > 100)
		sorting_500(a, b);
}
