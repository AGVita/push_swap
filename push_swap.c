/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzarquon <rzarquon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 18:19:14 by rzarquon          #+#    #+#             */
/*   Updated: 2022/06/21 14:56:52 by rzarquon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void	cut_lines(t_list **a, t_list **b, int i)
{
	if (a && i)
	{
		repeat_check(a, i);
		make_indexes(a, i);
		if (check_sort(*a))
			sort(a, b, i);
	}
}

int	main(int argc, char **argv)
{
	static t_list	*a;
	static t_list	*b;
	static int		i;
	int				tmp;

	if (argc > 1)
	{
		while (argc != 1)
		{
			tmp = ft_atoi(argv[--argc]);
			if ((tmp < 0 && argv[argc][0] != '-') || \
			(tmp < 0 && ft_strlen(argv[argc]) > 11))
				do_error();
			if ((tmp > 0 && argv[argc][0] == '-') || \
			(tmp > 0 && ft_strlen(argv[argc]) > 10))
				do_error();
			push_a(&a, tmp);
			i++;
		}
	}
	cut_lines(&a, &b, i);
	ft_lstclear(&a);
	return (0);
}
