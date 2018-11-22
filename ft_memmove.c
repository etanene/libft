/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalmer- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 17:21:55 by afalmer-          #+#    #+#             */
/*   Updated: 2018/11/21 17:21:59 by afalmer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (dst <= src)
	{
		i = 0;
		while (i < len)
		{
			*((char*)dst + i) = *((char*)src + i);
			i++;
		}
	}
	else
	{
		i = len;
		while (i--)
			*((char*)dst + i) = *((char*)src + i);
	}
	return (dst);
}
