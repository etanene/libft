/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalmer- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 15:33:24 by afalmer-          #+#    #+#             */
/*   Updated: 2018/11/23 15:33:25 by afalmer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*res_hs;

	if (!*needle)
		return ((char*)haystack);
	while (*haystack != *needle && len--)
		haystack++;
	res_hs = (char*)haystack;	
	while (*haystack++ == *needle++ && len--)
		;
	if (!*(needle - 1))
		return (res_hs);
	return (NULL);
}
