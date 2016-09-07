/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlavallo <rlavallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 16:28:52 by rlavallo          #+#    #+#             */
/*   Updated: 2016/02/16 12:52:57 by rlavallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char	*s;
	int		i;
	int		j;

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
