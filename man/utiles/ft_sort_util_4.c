/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_util_4.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 10:08:17 by zzirh             #+#    #+#             */
/*   Updated: 2022/06/08 10:26:32 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	find_min_a(t_list **sta, int i, int size)
{
	if (i == size)
		rra(sta);
	else if (i == (size - 1))
	{
		rra(sta);
		rra(sta);
	}
	else if (i == (size - 2))
	{
		ra(sta);
	}
}
