/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instructions2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 17:31:20 by zzirh             #+#    #+#             */
/*   Updated: 2022/06/12 17:31:51 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate(t_list **stack)
{
	t_list	*first;
	t_list	*last;

	if (*stack != NULL && ft_lstsize(*stack) != 1)
	{
		first = *stack;
		last = ft_lstlast(*stack);
		*stack = first->next;
		first->next = NULL;
		last->next = first;
	}
}

void	ra(t_list **sta)
{
	rotate(sta);
	write(1, "ra\n", 3);
}

void	rb(t_list **stb)
{
	rotate(stb);
	write(1, "rb\n", 3);
}

void	rr(t_list **sta, t_list **stb)
{
	rotate(sta);
	rotate(stb);
	write(1, "rr\n", 3);
}
