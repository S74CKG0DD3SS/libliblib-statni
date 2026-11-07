/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roel-oua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 09:36:49 by roel-oua          #+#    #+#             */
/*   Updated: 2026/11/07 09:37:00 by roel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	putnbr_rec(long n, int fd)
{
	if (n >= 10)
		putnbr_rec(n / 10, fd);
	ft_putchar_fd((n % 10) + '0', fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	putnbr_rec(nb, fd);
}
