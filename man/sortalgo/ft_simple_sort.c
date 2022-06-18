/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simple_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 00:14:31 by zzirh             #+#    #+#             */
/*   Updated: 2022/06/08 17:56:33 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_2(t_list **sta)
{
	if ((*sta)->data > (*sta)->next->data)
		sa(sta);
}

void	sort_3(t_list **sta)
{
	int	i;
	int	j;

	i = (*sta)->next->data;
	j = (*sta)->next->next->data;
	if ((*sta)->data > i && (*sta)->data < j && i < j)
		sa(sta);
	if ((*sta)->data > i && (*sta)->data > j && i > j)
	{
		sa(sta);
		rra(sta);
	}
	if ((*sta)->data > i && (*sta)->data > j && i < j)
		ra(sta);
	if ((*sta)->data < i && (*sta)->data < j && i > j)
	{
		sa(sta);
		ra(sta);
	}
	if ((*sta)->data < i && (*sta)->data > j && i > j)
		rra(sta);
}

void	sort_4(t_list **sta, t_list **stb)
{
	int		i;
	int		m;
	int		size;
	t_list	*tmp;

	i = 1;
	m = min(*sta);
	size = ft_lstsize(*sta);
	tmp = *sta;
	while (tmp)
	{
		if ((tmp->data) == m)
			break ;
		i++;
		tmp = tmp->next;
	}
	find_min_a(sta, i, size);
	pb(sta, stb);
	sort_3(sta);
	pa(sta, stb);
}

void	sort_5(t_list **sta, t_list **stb)
{
	int		i;
	int		m;
	int		size;
	t_list	*tmp;

	i = 1;
	m = min(*sta);
	size = ft_lstsize(*sta);
	tmp = *sta;
	while (tmp)
	{
		if (tmp->data == m)
			break ;
		i++;
		tmp = tmp->next;
	}
	find_min_b(sta, i, size);
	pb(sta, stb);
	sort_4(sta, stb);
	pa(sta, stb);
}
