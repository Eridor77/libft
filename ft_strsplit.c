/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlavallo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 08:41:20 by rlavallo          #+#    #+#             */
/*   Updated: 2016/01/21 08:43:08 by rlavallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	int		words;
	int		i;

	words = 0;
	i = 0;
	while (*s != '\0')
	{
		if (i == 1 && *s == c)
			i = 0;
		if (i == 0 && *s != c)
		{
			i = 1;
			words++;
		}
		s++;
	}
	return (words);
}

static int	ft_word_len(const char *s, char c)
{
	int		len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**p;
	int		words;
	int		i;

	i = 0;
	words = ft_count_words((const char*)s, c);
	if ((p = (char**)malloc(sizeof(*p) * (words + 1))) == NULL)
		return (NULL);
	while (words--)
	{
		while (*s == c && *s != '\0')
			s++;
		p[i] = ft_strsub((const char*)s, 0, ft_word_len((const char *)s, c));
		if (p[i] == NULL)
			return (NULL);
		s = s + ft_word_len(s, c);
		i++;
	}
	p[i] = NULL;
	return (p);
}
