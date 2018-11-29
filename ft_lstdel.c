/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalmer- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 13:58:05 by afalmer-          #+#    #+#             */
/*   Updated: 2018/11/29 13:58:06 by afalmer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*temp;

	if (alst && del)
	{
		temp = *alst;
		while (temp)
		{
			temp = *alst;
			del((*alst)->content, (*alst)->content_size);
			*alst = (*alst)->next;
			temp = temp->next;
			free(*alst);
			*alst = NULL;
		}
	}
}
