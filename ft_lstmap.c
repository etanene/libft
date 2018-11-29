/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afalmer- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 16:42:06 by afalmer-          #+#    #+#             */
/*   Updated: 2018/11/29 16:42:07 by afalmer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*res;
	t_list	*temp;

	if (lst && f)
	{
		temp = lst;
		res = temp;
		while (lst)
		{
			if (((temp = f(lst))) == NULL)
			{
				//ft_free_list(&temp);
				return (NULL);
			}
			lst = lst->next;
			temp = temp->next;
		}
		return (res);
	}
}
