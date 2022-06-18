/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:55:00 by zzirh             #+#    #+#             */
/*   Updated: 2022/06/18 00:32:23 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus.h"

t_list	*ft_lstnew(int content)
{
	t_list	*n;

	n = (t_list *)malloc(sizeof(t_list));
	if (!n)
		return (NULL);
	n->data = content;
	n->next = NULL;
	return (n);
}
