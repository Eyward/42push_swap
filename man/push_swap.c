/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 20:55:22 by zzirh             #+#    #+#             */
/*   Updated: 2022/06/15 00:38:23 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_stack(t_list **stack_a, t_list **stack_b)
{
	if (issorted(*stack_a))
	{
		ft_lstclear(*stack_a);
		return ;
	}
	if (ft_lstsize(*stack_a) <= 5)
	{
		if (ft_lstsize(*stack_a) == 2)
			sort_2(stack_a);
		else if (ft_lstsize(*stack_a) == 3)
			sort_3(stack_a);
		else if (ft_lstsize(*stack_a) == 4)
			sort_4(stack_a, stack_a);
		else if (ft_lstsize(*stack_a) == 5)
			sort_5(stack_a, stack_b);
	}
	else
		ft_sort(stack_a, stack_b);
	ft_lstclear(*stack_a);
	ft_lstclear(*stack_b);
}

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;

	b = NULL;
	if (ac < 2)
		exit(EXIT_FAILURE);
	a = ft_checkstack(ac, av);
	if (ft_lstsize(a) == 1)
	{
		ft_lstclear(a);
		return (1);
	}
	if (!a)
	{
		write(1, "Error\n", 6);
		exit(EXIT_FAILURE);
	}	
	else
		sort_stack(&a, &b);
	return (0);
}
