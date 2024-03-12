/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:23:27 by root              #+#    #+#             */
/*   Updated: 2023/09/22 01:58:51 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Creates a new string by concatenating 's1' and 's2'
char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*new_s;
	char	*start;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2);
	new_s = malloc(sizeof(char) * (len + 1));
	if (!new_s)
		return (0);
	start = new_s;
	while (*s1)
		*new_s++ = *s1++;
	while (*s2)
		*new_s++ = *s2++;
	*new_s = '\0';
	return (start);
}
