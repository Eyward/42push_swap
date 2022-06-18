/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 22:51:10 by zzirh             #+#    #+#             */
/*   Updated: 2022/06/14 00:12:50 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	*ft_error(t_list *st, int ac, char **av)
{
	int	i;

	ft_lstclear(st);
	if (ac == 1 || ac == 2)
	{
		i = 0;
		while (av[i])
		{
			free(av[i]);
			i++;
		}
		free(av);
	}
	write(2, "Error\n", 6);
	exit(EXIT_FAILURE);
}
