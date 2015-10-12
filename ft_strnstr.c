/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlavallo <rlavallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 13:32:18 by rlavallo          #+#    #+#             */
/*   Updated: 2014/11/08 14:34:35 by rlavallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *s1, char *s2, size_t n)
{
	char	c;
	char	sc;
	size_t	len;

	c = *s2++;
	sc = *s1++;
	if (c != '\0')
	{
		len = ft_strlen(s2);
		while (ft_strncmp(s1, s2, n) != 0)
		{
			while (sc != c)
			{
				if ((sc == '\0') || n-- < 1)
					return (NULL);
			}
			if (len > n)
				return (NULL);
			s1--;
		}
	}
	return ((char *)s1);
}
