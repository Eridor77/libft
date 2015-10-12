/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlavallo <rlavallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 16:28:52 by rlavallo          #+#    #+#             */
/*   Updated: 2015/09/28 16:17:51 by rlavallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char	*s;
	int		i;
	int		j;

	if (dest != NULL && src != NULL)
	{
		i = 0;
		s = dest;
		while (s[i] != '\0')
			i++;
		j = 0;
		while (n--)
		{
			s[i] = src[j];
			i++;
			j++;
		}
		s[i] = '\0';
		return (s);
	}
	return (NULL);
}
