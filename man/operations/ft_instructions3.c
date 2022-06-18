/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instruction3.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 17:32:07 by zzirh             #+#    #+#             */
/*   Updated: 2022/06/12 17:32:35 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	r_rotate(t_list **stack)
{
	t_list	*tmp;
	t_list	*last;

	if (*stack != NULL && ft_lstsize(*stack) != 1)
	{
		tmp = *stack;
		last = ft_lstlast(tmp);
		while (tmp)
		{
			if (!tmp->next->next)
			{
				tmp->next = NULL;
				break ;
			}
			tmp = tmp->next;
		}
		last->next = *stack;
		*stack = last;
	}
}

void	rra(t_list **sta)
{
	r_rotate(sta);
	write(1, "rra\n", 4);
}

void	rrb(t_list **stb)
{
	r_rotate(stb);
	write(1, "rrb\n", 4);
}

void	rrr(t_list **sta, t_list **stb)
{
	r_rotate(sta);
	r_rotate(stb);
	write(1, "rrr\n", 4);
}
