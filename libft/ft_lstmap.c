/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlhomme <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 14:45:56 by vlhomme           #+#    #+#             */
/*   Updated: 2018/11/16 19:45:33 by vlhomme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*tmp;
	t_list	*first;

	if (lst)
	{
		tmp = f(lst);
		new = ft_lstnew(tmp->content, tmp->content_size);
		if (new == NULL)
			return (NULL);
		first = new;
		lst = lst->next;
		while (lst)
		{
			tmp = f(lst);
			new->next = ft_lstnew(tmp->content, tmp->content_size);
			if (new->next == NULL)
				return (NULL);
			new = new->next;
			lst = lst->next;
		}
		return (first);
	}
	return (NULL);
}
