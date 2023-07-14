/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrosa-do <lrosa-do@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 12:19:56 by lrosa-do          #+#    #+#             */
/*   Updated: 2022/07/29 19:10:35 by lrosa-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	value_words(char const *s, char c)
{
	int		value;

	value = 0;
	while (*s)
	{
		while (*s == c)
		{
			s++;
		}
		if (*s != c && *s)
		{
			value++;
		}
		while (*s != c && *s)
		{
			s++;
		}
	}
	return (value);
}

size_t	ft_strlen(const char *s)
{
	size_t	l;

	l = 0;
	while (s[l])
	{
		l++;
	}
	return (l);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize)
	{
		while (src[i] && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

char	*init_str(char const *s, char c)
{
	int		i;
	char	*ptr;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	ptr = (char *)malloc(sizeof(*ptr) * (i + 1));
	ft_strlcpy(ptr, s, i + 1);
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		len_strs;
	char	**ptr;

	len_strs = value_words(s, c);
	ptr = (char **)malloc(sizeof(*ptr) * (len_strs + 1));
	i = -1;
	while (++i < len_strs)
	{
		while (s[0] == c)
		{
			s++;
		}
		ptr[i] = init_str(s, c);
		if (!ptr[i])
		{
			while (i > 0)
				free(ptr[i--]);
			free(ptr);
			return (NULL);
		}
		s = s + ft_strlen(ptr[i]);
	}
	ptr[i] = 0;
	return (ptr);
}
