/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:40:35 by root              #+#    #+#             */
/*   Updated: 2023/09/22 14:37:15 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char c);
static int	word_len(const char *s, char c);
static char	*allocate_word(const char *s, char c);
static char	**ft_free_mem(char **result, int last_i);

// Split the string 's' by character 'c' and return an array of words
char	**ft_split(const char *s, char c)
{
	char	**result;
	int		words;
	int		len;
	int		i;

	words = ft_count_words(s, c);
	result = malloc(sizeof(char *) * (words + 1));
	if (!result)
		return (0);
	i = 0;
	while (i < words)
	{
		while (*s == c)
			s++;
		len = word_len(s, c);
		result[i] = allocate_word(s, c);
		if (!result[i])
			return (ft_free_mem(result, i - 1));
		ft_strlcpy(result[i], s, len + 1);
		s += len;
		i++;
	}
	result[i] = NULL;
	return (result);
}

// Count the total words separated by 'c' in the string 's'
static int	ft_count_words(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

// Determine the length of a word up to character 'c' or end of string
static int	word_len(const char *s, char c)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

// Allocate memory space for a word in the string 's' up to character 'c'
static char	*allocate_word(const char *s, char c)
{
	return (malloc(word_len(s, c) + 1));
}

// Free the memory allocated in case of failure
static char	**ft_free_mem(char **result, int last_i)
{
	while (last_i >= 0)
		free(result[last_i--]);
	free(result);
	return (0);
}
