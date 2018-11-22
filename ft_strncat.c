/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalmer- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 18:23:12 by afalmer-          #+#    #+#             */
/*   Updated: 2018/11/22 18:23:17 by afalmer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	char	*new_s1;

	new_s1 = s1;
	while (*new_s1)
		new_s1++;
	while (*s2 && n--)
		*new_s1++ = *s2++;
	*new_s1 = '\0';
	return (s1);
}
