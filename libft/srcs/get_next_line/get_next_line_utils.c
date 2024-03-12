/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 13:49:27 by root              #+#    #+#             */
/*   Updated: 2024/02/11 14:28:05 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static size_t	ft_strlen(char *s)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (NULL);
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (0);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*new_s;
	size_t	i;
	size_t	j;

	if (!s1)
	{
		s1 = malloc(sizeof(char));
		if (!s1)
			return (NULL);
		s1[0] = '\0';
	}
	if (!s1 || !s2)
		return (NULL); 
	new_s = malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2)) + 1));
	if (!new_s)
		return (NULL);
	i = -1;
	while (s1[++i] != '\0')
		new_s[i] = s1[i];
	j = 0;
	while (s2[j] != '\0')
		new_s[i++] = s2[j++];
	new_s[i] = '\0';
	free(s1);
	return (new_s);
}

char	*ft_get_line(char *stored_s)
{
	char	*s;
	int		i;

	i = 0;
	if (!stored_s[i])
		return (NULL);
	while (stored_s[i] && stored_s[i] != '\n')
		i++;
	s = malloc(sizeof(char) * (i + 2));
	if (!s)
		return (NULL);
	i = 0;
	while (stored_s[i] && stored_s[i] != '\n')
	{
		s[i] = stored_s[i];
		i++;
	}
	if (stored_s[i] == '\n')
	{
		s[i] = stored_s[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

char	*ft_update(char *stored_s)
{
	char	*new_s;
	int		i;
	int		j;

	i = 0;
	while (stored_s[i] && stored_s[i] != '\n')
		i++;
	if (!stored_s[i])
	{
		free(stored_s);
		return (NULL);
	}
	new_s = malloc(sizeof(char) * (ft_strlen(stored_s) - i + 1));
	if (!new_s)
		return (NULL);
	i++;
	j = 0;
	while (stored_s[i])
		new_s[j++] = stored_s[i++];
	new_s[j] = '\0';
	free(stored_s);
	return (new_s);
}
