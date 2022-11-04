/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:35:29 by pgorner           #+#    #+#             */
/*   Updated: 2022/11/04 15:32:23 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void *ft_readstring(int fd, char *rf)
{
	char *line;
	char *buffer;

	if (!res)
		res = ft_calloc(1, 1);
	buffer = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (read(fd, buffer, BUFFER_SIZE) > 0 )
	{
		line = read(fd, buffer, BUFFER_SIZE);
	}
	return (line);
}

char *get_next_line(int fd)
{
	char *line;
	static char *buf;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	buf = ft_readstring(fd, buf);
	if (!buf)
		return (NULL);
	return(line);
}
