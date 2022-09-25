/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarquon <rzarquon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 15:13:28 by rzarquon          #+#    #+#             */
/*   Updated: 2022/06/21 14:58:49 by rzarquon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	max_value(t_list **a)
{
	int		i;
	t_list	*temp;

	i = 0;
	temp = *a;
	i = temp->index;
	while (temp != NULL)
	{
		if (i < temp->index)
			i = temp->index;
		temp = temp->next;
	}
	return (i);
}

int	min_value(t_list **a)
{
	int		i;
	t_list	*temp;

	i = 0;
	temp = *a;
	i = temp->index;
	while (temp != NULL)
	{
		if (i > temp->index)
			i = temp->index;
		temp = temp->next;
	}
	return (i);
}

size_t	ft_strlen(const char *s)
{
	int	count;

	count = 0;
	while (*s)
	{
		count++;
		s++;
	}
	return (count);
}

void	ft_lstclear(t_list **lst)
{
	t_list	*temp;

	while (*lst)
	{
		temp = *lst;
		*lst = temp->next;
		free(temp);
	}
	*lst = NULL;
}
