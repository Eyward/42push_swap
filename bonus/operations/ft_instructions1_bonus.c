/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instructions1_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 17:27:33 by zzirh             #+#    #+#             */
/*   Updated: 2022/06/18 04:24:45 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../bonus.h"

void	swap(t_list **stack)
{
	int	tmp;

	if (*stack != NULL && ft_lstsize(*stack) != 1)
	{
		tmp = (*stack)->data;
		(*stack)->data = (*stack)->next->data;
		(*stack)->next->data = tmp;
	}
}

// void	sa(t_list **sta)
// {
// 	swap(sta);
// 	write(1, "sa\n", 3);
// }

// void	sb(t_list **stb)
// {
// 	swap(stb);
// 	write(1, "sb\n", 3);
// }

// void	ss(t_list **sta, t_list **stb)
// {
// 	swap(sta);
// 	swap(stb);
// 	write(1, "ss\n", 3);
// }
