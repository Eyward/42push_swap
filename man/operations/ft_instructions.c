/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instructions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 17:53:45 by zzirh             #+#    #+#             */
/*   Updated: 2022/06/12 17:33:37 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(t_list **sa, t_list **sb)
{
	t_list	*to;
	t_list	*from;
	t_list	*tmp;

	if (ft_lstsize(*sa) == 0)
		return ;
	to = *sb;
	from = *sa;
	tmp = from;
	from = (*sa)->next;
	*sa = from;
	if (!to)
	{
		to = tmp;
		to->next = NULL;
		*sb = to;
	}
	else
	{
		tmp->next = to;
		*sb = tmp;
	}
}

void	pa(t_list **sa, t_list **sb)
{
	push(sb, sa);
	write(1, "pa\n", 3);
}

void	pb(t_list **sa, t_list **sb)
{
	push(sa, sb);
	write(1, "pb\n", 3);
}
