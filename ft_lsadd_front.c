/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsadd_front.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmora-ro <jmora-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 09:51:14 by jmora-ro          #+#    #+#             */
/*   Updated: 2025/04/17 13:03:43 by jmora-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	*lst->prev = new;
	new -> next = *lst;
	new->prev = ft_last()
	*lst = new;
}

/*int	main(void)
{
    t_list *first = ft_lstnew("I am first");
    t_list *last = ft_lstnew("I am second");
	t_list *third = ft_lstnew("I am third");

    if (!first || !last) {
		printf("Memory allocation failed!\n");
		return 1;
	}

	last -> next = third;
	printf("First node content: %s\n", (char*)first->content);


	free(first);
	free(last);
	return (0);
}*/
