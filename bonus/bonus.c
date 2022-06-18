/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 00:16:59 by zzirh             #+#    #+#             */
/*   Updated: 2022/06/18 04:52:04 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

static void	checker(t_list **sta, t_list **stb, char *line )
{
	while (line)
	{
		if (!swap_b(line, sta, stb))
		{
			write(2, "Error\n", 6);
			exit(0);
		}
		line = get_next_line(0);
	}
	if (issorted(*sta) && ft_lstsize(*sta))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;
	char	*line;

	b = NULL;
	if (ac < 2)
		exit(EXIT_FAILURE);
	a = ft_checkstack(ac, av);
	if (ft_lstsize(a) == 1)
	{
		ft_lstclear(a);
		return (1);
	}
	if (!a)
	{
		write(1, "Error\n", 6);
		exit(EXIT_FAILURE);
	}
	line = get_next_line(0);
	checker(&a, &b, line);
	ft_lstclear(a);
	ft_lstclear(b);
	return (0);
}
