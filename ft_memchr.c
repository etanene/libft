/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalmer- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 11:47:38 by afalmer-          #+#    #+#             */
/*   Updated: 2018/11/22 11:47:39 by afalmer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*new_s;

	if (!s)
		return (NULL);
	new_s = (char*)s;
	while (*new_s && n--)
	{
		if (*new_s == (unsigned char)c)
			return (new_s);
		new_s++;
	}
	if (*new_s == c)
		return (new_s);
	return (NULL);
}
