/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarquon <rzarquon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 17:49:44 by rzarquon          #+#    #+#             */
/*   Updated: 2022/06/21 15:56:48 by rzarquon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	do_error(void)
{
	write(1, "Error\n", 6);
	exit(0);
}

void	do_error_with_free(int	*mass)
{
	free(mass);
	write(1, "Error\n", 6);
	exit(0);
}

int	check_num(char *str, int i, int pom)
{
	int	n;

	n = 0;
	while (str[i])
	{
		if (str[i] > '9' || str[i] < '0')
			do_error();
		n = n * 10 + pom * (str[i] - 48);
		i++;
	}
	return (n);
}

int	ft_atoi(char *str)
{
	int	n;
	int	i;
	int	pom;

	pom = 1;
	i = 0;
	n = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			pom *= -1;
		i++;
	}
	if (str[i] >= '0' && str[i] <= '9')
	{
		n = check_num(str, i, pom);
	}
	else
		do_error();
	return (n);
}

void	repeat_check(t_list **list, int argc)
{
	t_list		*list1;
	static int	i;
	static int	o;
	static int	p;
	int			*mass;

	list1 = *list;
	mass = malloc(sizeof(int) * argc);
	if (!mass)
		return ;
	*mass = make_arr(*list, mass);
	while (argc > i)
	{
		o = mass[i];
		p = i + 1;
		while (argc > p)
		{
			if (o == mass[p])
				do_error_with_free(mass);
			p++;
		}
		i++;
	}
	free(mass);
}
