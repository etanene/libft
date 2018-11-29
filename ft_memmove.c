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
	char	*new_dst;
	char	*new_src;

	if (!src)
		return (NULL);
	if (dst <= src)
	{
		new_dst = (char*)dst;
		new_src = (char*)src;
		while (len--)
			*new_dst++ = *new_src++;
	}
	else
	{
		new_dst = (char*)dst + len - 1;
		new_src = (char*)src + len - 1;
		while (len--)
			*new_dst-- = *new_src--;
	}
	return (dst);
}
