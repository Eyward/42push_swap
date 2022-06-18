/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:55:00 by zzirh             #+#    #+#             */
/*   Updated: 2022/06/08 17:33:09 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
