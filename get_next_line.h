/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgorner <pgorner@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:36:12 by pgorner           #+#    #+#             */
/*   Updated: 2022/11/16 15:32:29 by pgorner          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 0
# endif
// =============================================================================
//								  noot_type
// =============================================================================
// Just the thing that makes all of it noot
char	*get_next_line(int fd);
// Frees the result and amkes buf = the file content
char	*ft_free(char *res, char *buf);
// Goes to the next line in the file content
char	*ft_next(char *buf);
// Just takes the one line that it needs to get
char	*ft_line (char *buf);
// Reads the content of fd
char	*ft_read(int fd, char *buf);
// Calloc
void	*ft_calloc(size_t count, size_t size);
// Strlen
size_t	ft_strlen(const char *str);
// Strchr
char	*ft_strchr(const char *s, int c);
// Strjoin
char	*ft_strjoin(char *s1, char *s2);
// Bzero
void	ft_bzero(void *s, size_t n);
#endif

