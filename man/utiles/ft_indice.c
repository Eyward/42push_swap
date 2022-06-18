/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_indice.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 01:08:51 by zzirh             #+#    #+#             */
/*   Updated: 2022/06/18 05:06:23 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	*ft_sort_array(int *array, int size)
{
	int			tmp;
	int			i;
	int			j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (array[i] > array[j])
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
			}
			j++;
		}
		i++;
	}
	return (array);
}

int	*ft_array(t_list *sta)
{
	int			size;
	int			i;
	int			*array;
	t_list		*tmp;

	size = ft_lstsize(sta);
	array = (int *)malloc(sizeof(int) * size);
	tmp = sta;
	i = 0;
	while (tmp)
	{
		array[i] = tmp->data;
		tmp = tmp->next;
		i++;
	}
	array = ft_sort_array(array, size);
	return (array);
}

void	ft_index(t_list **sta)
{
	int				i;
	int				*array;
	t_list			*tmp;

	array = ft_array(*sta);
	tmp = *sta;
	while (tmp)
	{
		i = 0;
		while (i < ft_lstsize(*sta))
		{
			if (tmp->data == array[i])
			{
				tmp->index = i;
				break ;
			}
			i++;
		}
		tmp = tmp->next;
	}
	free(array);
}
