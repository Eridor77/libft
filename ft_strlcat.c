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
	size_t	dest_len;
	size_t	pos;
	size_t	size_copy;
	char	*dest_copy;

	if ((src == NULL) || (dest == NULL) || (n == 0))
		return (0);
	dest_len = ft_strlen(dest);
	dest_copy = dest + dest_len;
	size_copy = n - dest_len;
	pos = 0;
	while (pos < (size_copy - 1))
	{
		if (src[pos] == 0)
			break ;
		dest_copy[pos] = src[pos];
		pos++;
	}
	dest_copy[pos] = 0;
	return ((pos + dest_len));
}
