/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roel-oua <roel-oua@student.1337.ma>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 09:24:18 by roel-oua             #+#    #+#             */
/*   Updated: 2026/11/07 09:24:18 by roel-oua            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

static int	in_set(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*cpy;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && in_set(s1[end - 1], set))
		end--;
	cpy = malloc(end - start + 1);
	if (cpy == NULL)
		return (NULL);
	i = 0;
	while (i < end - start)
	{
		cpy[i] = s1[start + i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
