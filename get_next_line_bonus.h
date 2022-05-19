/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtomomit <mtomomit@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 19:14:42 by mtomomit          #+#    #+#             */
/*   Updated: 2022/05/19 16:52:27 by mtomomit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stddef.h>
# include <limits.h>
# include <unistd.h>
# include <stdlib.h>

# ifndef OPEN_MAX
#  define OPEN_MAX 257
# endif

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