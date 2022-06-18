/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_issorted.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 16:09:38 by zzirh             #+#    #+#             */
/*   Updated: 2022/06/08 18:29:50 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	issorted(t_list *stack)
{
	t_list	*a;
	t_list	*b;

	a = stack;
	b = stack->next;
	while (a && b)
	{
		if (a->data > b->data)
			return (0);
		a = a->next;
		b = a->next;
	}
	return (1);
}
