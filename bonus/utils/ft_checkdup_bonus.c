/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkdup_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 17:46:12 by zzirh             #+#    #+#             */
/*   Updated: 2022/06/18 00:29:46 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus.h"

t_list	*ft_checkdup(t_list *stack)
{
	t_list	*tmp;
	t_list	*check;

	check = stack;
	while (stack)
	{
		tmp = stack->next;
		while (tmp)
		{
			if (tmp->data == stack->data)
			{
				ft_lstclear(check);
				return (NULL);
			}
			tmp = tmp->next;
		}
		stack = stack->next;
	}
	return (check);
}
