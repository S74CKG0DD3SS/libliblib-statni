/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roel-oua <roel-oua@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 20:14:57 by roel-oua          #+#    #+#             */
/*   Updated: 2026/11/07 20:14:58 by roel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*r;
	const char	*s;

	r = (char *)dest;
	s = (const char *)src;
	i = 0;
	while (i < n)
	{
		*r = *s;
		s++;
		r++;
		i++;
	}
	return (dest);
}
