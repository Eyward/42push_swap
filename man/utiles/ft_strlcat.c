/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzirh <zzirh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 08:14:58 by zzirh             #+#    #+#             */
/*   Updated: 2022/04/23 16:37:53 by zzirh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	lns;
	unsigned int	lnd;
	unsigned int	sret;

	i = 0;
	lns = 0;
	lnd = 0;
	sret = 0;
	while (src[lns] != '\0')
		lns++;
	while (dest[lnd] != '\0')
		lnd++;
	if (size < lnd)
		sret = lns + size;
	else
		sret = lns + lnd;
	while ((src[i] != '\0') && (lnd + 1) < size)
	{
		dest[lnd] = src[i];
		lnd++;
		i++;
	}
	dest[lnd] = '\0';
	return (sret);
}	
