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

char	*ft_strdup(const char *s)
{
	size_t	s_len;
	size_t	i;
	char	*new_s;

	s_len = ft_strlen(s);
	new_s = malloc(s_len + 1);
	if (new_s == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new_s[i] = s[i];
		i++;
	}
	new_s[i] = 0x00;
	return (new_s);
}
