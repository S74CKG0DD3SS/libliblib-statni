/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roel-oua < roel-oua@student.1337.ma >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 09:36:49 by roel-oua          #+#    #+#             */
/*   Updated: 2026/11/07 11:34:04 by roel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_digits(long n)
{
	size_t	len;

	len = (n < 0) + (n == 0);
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static void	fill_itoa(char *str, long nb, size_t len, int n)
{
	size_t	i;

	i = len;
	if (nb < 0)
	{
		nb = -nb;
		str[0] = '-';
	}
	str[len] = '\0';
	while (i > 0)
	{
		if (n < 0 && i == 1)
			break ;
		str[i - 1] = nb % 10 + '0';
		nb /= 10;
		i--;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;

	len = count_digits(n);
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	fill_itoa(str, n, len, n);
	return (str);
}
