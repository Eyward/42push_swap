/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 22:16:50 by zzirh             #+#    #+#             */
/*   Updated: 2022/05/09 20:36:48 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*p;

	if (!new)
		return ;
	p = ft_lstlast(*lst);
	if (lst)
	{
		if (*lst)
		{
			p->next = new;
			new->next = NULL;
			return ;
		}
		*lst = new;
	}
}
