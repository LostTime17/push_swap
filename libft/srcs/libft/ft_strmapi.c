/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 19:01:01 by root              #+#    #+#             */
/*   Updated: 2023/09/22 01:59:18 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Creates a new string by applying the function 'f' to each character
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*new_s;
	size_t	len;
	size_t	i;

	if (!s || !f)
		return (0);
	len = ft_strlen(s);
	new_s = malloc(len + 1);
	if (!new_s)
		return (0);
	i = 0;
	while (i < len)
	{
		new_s[i] = f(i, s[i]);
		i++;
	}
	new_s[len] = '\0';
	return (new_s);
}
