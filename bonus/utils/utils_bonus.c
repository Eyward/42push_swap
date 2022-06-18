/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 00:42:50 by zzirh             #+#    #+#             */
/*   Updated: 2022/06/18 03:27:25 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus.h"

int	swap_b(char *line, t_list **sta, t_list **stb)
{
	if (!(ft_strncmp(line, "sa\n", 3)))
	{
		swap(sta);
		return (1);
	}
	if (!(ft_strncmp(line, "sb\n", 3)))
	{
		swap(stb);
		return (1);
	}
	if (!(ft_strncmp(line, "ss\n", 3)))
	{
		swap(sta);
		swap(stb);
		return (1);
	}
	return (pr_bonus(line, sta, stb));
}

int	pr_bonus(char *line, t_list **sta, t_list **stb)
{
	if (!(ft_strncmp(line, "pa\n", 3)))
	{
		push(stb, sta);
		return (1);
	}
	if (!(ft_strncmp(line, "pb\n", 3)))
	{
		push(sta, stb);
		return (1);
	}
	if (!(ft_strncmp(line, "ra\n", 3)))
	{
		rotate(sta);
		return (1);
	}
	if (!(ft_strncmp(line, "rb\n", 3)))
	{
		rotate(stb);
		return (1);
	}
	return (rr_bonus(line, sta, stb));
}

int	rr_bonus(char *line, t_list **sta, t_list **stb)
{	
	if (!(ft_strncmp(line, "rr\n", 3)))
	{
		rotate(sta);
		rotate(stb);
		return (1);
	}	
	if (!(ft_strncmp(line, "rra\n", 4)))
	{
		r_rotate(sta);
		return (1);
	}
	if (!(ft_strncmp(line, "rrb\n", 4)))
	{
		r_rotate(stb);
		return (1);
	}
	if (!(ft_strncmp(line, "rrr\n", 4)))
	{
		r_rotate(sta);
		r_rotate(stb);
		return (1);
	}
	return (0);
}
