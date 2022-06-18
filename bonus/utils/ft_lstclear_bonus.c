/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 00:19:55 by zzirh             #+#    #+#             */
/*   Updated: 2022/06/18 00:31:54 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus.h"

void	ft_lstclear(t_list *lst)
{
	t_list	*tmp;

	tmp = lst;
	while (lst != NULL)
	{
		tmp = lst->next;
		free(lst);
		lst = tmp;
	}
	free(tmp);
}
