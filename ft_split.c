/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roel-oua <roel-oua@student.1337.ma>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 09:24:18 by roel-oua             #+#    #+#             */
/*   Updated: 2026/11/07 09:24:18 by roel-oua            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	word;
	size_t	i;

	word = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			word += 1;
		i++;
	}
	return (word);
}

static void	freeing(char **result, size_t j)
{
	size_t	k;

	k = 0;
	while (k < j)
	{
		free(result[k]);
		k++;
	}
	free(result);
}

static int	copy(char **word, const char *s, size_t start, size_t end)
{
	size_t	k;

	*word = malloc(end - start + 1);
	if (*word == NULL)
		return (0);
	k = 0;
	while (k < end - start)
	{
		(*word)[k] = s[start + k];
		k++;
	}
	(*word)[k] = 0x00;
	return (1);
}

static size_t	find_word(const char *s, char c, size_t i, size_t *start)
{
	while (s[i] && s[i] == c)
		i++;
	*start = i;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char **result;
	size_t i;
	size_t j;
	size_t start;

	i = 0;
	j = 0;
	result = malloc((count_words(s, c) + 1) * sizeof(*result));
	if (result == NULL)
		return (NULL);
	while (s[i])
	{
		i = find_word(s, c, i, &start);
		if (start == i)
			break ;
		if (!copy(&result[j], s, start, i))
		{
			freeing(result, j);
			return (NULL);
		}
		j++;
	}
	result[j] = NULL;
	return (result);
}