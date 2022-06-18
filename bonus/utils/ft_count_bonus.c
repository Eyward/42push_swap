/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 16:46:13 by zzirh             #+#    #+#             */
/*   Updated: 2022/06/18 00:29:57 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus.h"

int	ft_count(int *i, char *tab[])
{
	int	j;

	j = 0;
	while (tab[j] != NULL)
		j++;
	(*i)--;
	return (j);
}
