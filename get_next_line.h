/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtomomit <mtomomit@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 10:18:06 by mtomomit          #+#    #+#             */
/*   Updated: 2022/05/19 16:52:29 by mtomomit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

size_t			ft_strlcpy(char *dst, const char *src, size_t size);
size_t			ft_strlen(char const *s);
char			*get_next_line(int fd);
char			*ft_strdup(const char *s);
char			*ft_strchr(const char *s, int c);
char			*ft_realloc(char *str, size_t size);

#endif