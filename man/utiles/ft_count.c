/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 16:46:13 by zzirh             #+#    #+#             */
/*   Updated: 2022/04/23 17:39:35 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_count(int *i, char *tab[])
{
	int	j;

	j = 0;
	while (tab[j] != NULL)
		j++;
	(*i)--;
	return (j);
}
