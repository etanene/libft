/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalmer- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 13:33:47 by afalmer-          #+#    #+#             */
/*   Updated: 2018/11/21 13:33:48 by afalmer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*new_dst;
	char	*new_src;

	new_dst = (char*)dst;
	new_src = (char*)src;
	while (n--)
		*new_dst++ = *new_src++;
	return (dst);
}
