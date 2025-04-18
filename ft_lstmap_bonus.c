/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmora-ro <jmora-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 18:04:50 by jmora-ro          #+#    #+#             */
/*   Updated: 2025/04/18 18:37:03 by jmora-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),
void (*del)(void *))
{
	t_list	*final_list;
	t_list	*temp;
	t_list	*new_node;
	void	*content;

	if (lst == NULL)
		return (NULL);
	temp = lst;
	final_list = NULL;
	while (temp)
	{
		content = f(temp->content);
		new_node = ft_lstnew(content);
		if (new_node == NULL)
		{
			ft_lstclear(&final_list, del);
			del(content);
			return (NULL);
		}
		ft_lstadd_back(&final_list, new_node);
		temp = temp->next;
	}
	return (final_list);
}
