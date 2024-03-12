/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 13:49:17 by root              #+#    #+#             */
/*   Updated: 2024/02/11 13:49:17 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

// get_next_line.c
char	*get_next_line(int fd);

// get_next_line_utils.c
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char *stored_s, char *buffer);
char	*ft_get_line(char *stored_s);
char	*ft_update(char *stored_s);

#endif