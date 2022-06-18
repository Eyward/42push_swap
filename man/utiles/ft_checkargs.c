/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkargs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 16:06:20 by zzirh             #+#    #+#             */
/*   Updated: 2022/06/14 00:10:51 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_freeav(int c, char **av)
{
	int	i;

	i = 0;
	if (c == 2)
	{
		if (!ft_isnbr(av[0]))
			write(2, "error\n", 6);
		while (av[i])
		{
			free(av[i]);
			i++;
		}
		free(av);
	}
}

t_list	*ft_checkstack(int ac, char **av)
{
	t_list	*st;
	t_list	*tmp;
	int		i;
	int		c;

	i = 0;
	c = ac;
	st = NULL;
	if (ac == 2)
	{
		av = ft_split(av[1], ' ');
		ac = ft_count(&i, av);
	}
	while (++i < ac)
	{
		if (ft_isnbr(av[i]) && ft_isint(ft_atoi(av[i])))
		{
			tmp = ft_lstnew(ft_atoi(av[i]));
			ft_lstadd_back(&st, tmp);
		}
		else
			return (ft_error(st, c, av));
	}
	ft_freeav(c, av);
	return (ft_checkdup(st));
}
