/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlavallo <rlavallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 12:41:23 by rlavallo          #+#    #+#             */
/*   Updated: 2014/11/08 13:06:46 by rlavallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	pos;

	i = 0;
	while (dest[i] && i < n)
		i++;
	pos = i;
	while (src[i - pos] && i < n - 1)
	{
		dest[i] = src[i - pos];
		i++;
	}
	if (pos < n)
		dest[i] = '\0';
	return (pos + ft_strlen(src));
}
