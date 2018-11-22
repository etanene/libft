/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalmer- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 12:11:29 by afalmer-          #+#    #+#             */
/*   Updated: 2018/11/22 12:11:29 by afalmer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*new_s1;
	char	*new_s2;

	new_s1 = (char*)s1;
	new_s2 = (char*)s2;
	if (n)
	{
		while (--n && *new_s1 && (*new_s1 - *new_s2) == 0)
		{
			new_s1++;
			new_s2++;
		}
	}
	return (*new_s1 - *new_s2);	
}
