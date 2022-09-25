/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarquon <rzarquon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:44:27 by rzarquon          #+#    #+#             */
/*   Updated: 2022/06/21 15:56:57 by rzarquon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push_a(t_list **list_a, int value)
{	
	t_list	*new_list;

	if (!list_a)
		return ;
	new_list = malloc(sizeof(t_list));
	if (!new_list)
		return ;
	new_list->value = value;
	new_list->next = *list_a;
	*list_a = new_list;
}

int	lol(t_list **a)
{
	t_list	*temp;
	int		i;

	i = 0;
	temp = *a;
	while (temp->next != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}

int	med(t_list **a, int mediana, int i)
{
	int	j;
	int	*mass;

	mass = malloc(sizeof(int) * (i + 1));
	if (!mass)
		return (0);
	*mass = make_arr2(*a, mass);
	j = i;
	while (mass[i] != mediana)
		i--;
	j = j - i;
	i = 0;
	while (mass[i] != mediana)
		i++;
	free(mass);
	if (j < i)
		return (1);
	return (0);
}

int	copy_arr(int *mass1, int *mass2, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		mass2[i] = mass1[i];
		i++;
	}
	return (*mass2);
}
