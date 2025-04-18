/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmora-ro <jmora-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 16:46:08 by jmora-ro          #+#    #+#             */
/*   Updated: 2025/04/17 12:32:22 by jmora-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*destino;
	char	*source;
	size_t	i;

	destino = (char *)dest;
	source = (char *)src;
	if (!src || !dest)
		return (NULL);
	if (destino < source)
	{
		i = 0;
		while (i < n)
		{
			destino[i] = source[i];
			i++;
		}
	}
	else if (destino > source)
	{
		i = n - 1;
		while (i > 0)
		{
			destino[i] = source[i];
			i--;
		}
	}
	return (dest);
}
