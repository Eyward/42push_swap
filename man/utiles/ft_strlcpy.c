/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 07:55:04 by zzirh             #+#    #+#             */
/*   Updated: 2022/04/23 16:38:07 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	srcsize;
	unsigned int	i;

	srcsize = 0;
	i = 0;
	while (src[srcsize])
		srcsize++;
	if (size == 0)
	{
		return (srcsize);
	}
	else
	{
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
		return (srcsize);
	}	
}	
