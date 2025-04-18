/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmora-ro <jmora-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 09:28:35 by jmora-ro          #+#    #+#             */
/*   Updated: 2025/04/16 12:36:31 by jmora-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_digits(int n)
{
	int	count;

	count = 1;
	if (n < 0)
	{
		count++;
		n = n * -1;
	}
	while (n >= 10)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

void	fill_number_string(char *res, long num, int len)
{
	int	i;

	i = len - 1;
	if (num == 0)
		res[0] = '0';
	if (num < 0)
	{
		res[0] = '-';
		num = num * -1;
	}
	while (num > 0)
	{
		res[i] = (num % 10) + '0';
		num = num / 10;
		i--;
	}
	res[len] = '\0';
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;
	long	num;

	num = n;
	len = count_digits(num);
	res = (char *)malloc(((len + 1) * sizeof(char)));
	if (!res)
		return (NULL);
	fill_number_string(res, num, len);
	return (res);
}
