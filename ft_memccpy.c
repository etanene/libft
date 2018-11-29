/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalmer- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 15:22:41 by afalmer-          #+#    #+#             */
/*   Updated: 2018/11/21 15:22:42 by afalmer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*new_dst;
	char	*new_src;

	if (!src)
		return (NULL);
	new_dst = (char*)dst;
	new_src = (char*)src;
	while (n--)
	{
		*new_dst = *new_src;
		if (*new_src == (unsigned char)c)
			return (new_dst + 1);
		new_dst++;
		new_src++;
	}
	return (NULL);
}
