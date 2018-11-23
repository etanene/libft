/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalmer- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 12:30:40 by afalmer-          #+#    #+#             */
/*   Updated: 2018/11/23 12:30:41 by afalmer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*res_hs;

	if (!*needle)
		return ((char*)haystack);
	while (*haystack != *needle)
		haystack++;
	res_hs = (char*)haystack;
	while (*haystack++ == *needle++)
		;
	if (!*(needle - 1))
		return (res_hs);
	return (NULL);
}
