/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalmer- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 17:35:14 by afalmer-          #+#    #+#             */
/*   Updated: 2018/11/22 17:35:15 by afalmer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	char	*new_s1;

	new_s1 = s1;
	while (*new_s1)
		new_s1++;
	while (*s2)
		*new_s1++ = *s2++;
	*new_s1 = '\0';
	return (s1);
}
