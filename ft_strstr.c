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
	char	*new_hs;
	char	*new_needle;
	char	*res_hs;

	new_hs = (char*)haystack;
	new_needle = (char*)needle;
	res_hs = (char*)haystack;
	if (!*needle)
		return (res_hs);
	while (*new_hs != *new_needle)
		new_hs++;
	res_hs = new_hs;
	while (*new_hs++ == *new_needle++)
		;
	if (!*(new_needle - 1))
		return (res_hs);
	return (NULL);
}
