/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 00:15:02 by zzirh             #+#    #+#             */
/*   Updated: 2022/06/10 05:51:24 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	max_bits(t_list *sta)
{
	int		max_nbr;
	int		max_bits;
	int		size;
	t_list	*tmp;

	tmp = sta;
	max_bits = 0;
	size = ft_lstsize(tmp);
	max_nbr = size;
	while ((max_nbr >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	ft_sort(t_list **sta, t_list **stb)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	ft_index(sta);
	size = ft_lstsize(*sta);
	while (max_bits(*sta) > i)
	{
		j = 0;
		while (size > j)
		{
			if ((((*sta)->index >> i) & 1) == 1)
				ra(sta);
			else
				pb(sta, stb);
			j++;
		}
		while (ft_lstsize(*stb) != 0)
			pa(sta, stb);
		i++;
	}
}
