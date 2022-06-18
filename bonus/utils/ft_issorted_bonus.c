/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_issorted_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 16:09:38 by zzirh             #+#    #+#             */
/*   Updated: 2022/06/18 00:31:15 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus.h"

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
