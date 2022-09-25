/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarquon <rzarquon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 17:14:41 by rzarquon          #+#    #+#             */
/*   Updated: 2022/06/21 15:23:08 by rzarquon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	sort_arr_for_index(int *mass1, int len)
{
	int	i;
	int	j;
	int	temp;

	if (!mass1 || !len)
		return (0);
	i = 0;
	temp = 0;
	while (i < len - 1)
	{
		j = len - 1;
		while (j > i)
		{
			if (mass1[j] < mass1[j - 1])
			{
				temp = mass1[j - 1];
				mass1[j - 1] = mass1[j];
				mass1[j] = temp;
			}
			j--;
		}
		i++;
	}
	return (*mass1);
}

int	make_arr2(t_list *list, int *mass)
{
	int	i;

	if (!list || !mass)
		return (0);
	i = 0;
	while (list)
	{
		mass[i] = list->index;
		list = list->next;
		i++;
	}	
	return (*mass);
}

int	make_arr(t_list *list, int	*mass)
{
	int	i;

	if (!list || !mass)
		return (0);
	i = 0;
	while (list)
	{
		mass[i] = list->value;
		list = list->next;
		i++;
	}
	return (*mass);
}

int	index_by_symbol(int	*mass1, int mass2)
{
	int	i;

	i = 0;
	while (mass1[i] != mass2)
		i++;
	return (i);
}

void	make_indexes(t_list **a, int i)
{
	t_list	*temp1;
	t_list	*temp2;
	int		*mass1;
	int		*mass2;
	int		count;

	temp1 = *a;
	temp2 = temp1;
	count = 0;
	mass1 = malloc(sizeof(int) * (i + 1));
	mass2 = malloc(sizeof(int) * (i + 1));
	if (!mass1 || !mass2)
		return ;
	*mass1 = make_arr(temp1, mass1);
	*mass2 = copy_arr(mass1, mass2, i);
	*mass1 = sort_arr_for_index(mass1, i);
	while (temp2 != NULL)
	{
		temp2->index = index_by_symbol(mass1, mass2[count]);
		temp2 = temp2->next;
		count++;
	}
	free(mass1);
	free(mass2);
}
