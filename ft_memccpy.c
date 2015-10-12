/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlavallo <rlavallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 12:16:34 by rlavallo          #+#    #+#             */
/*   Updated: 2014/11/13 16:23:27 by rlavallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char		*dp;
	const char	*sp;

	dp = dest;
	sp = src;
	while (n--)
	{
		if ((*dp++ = *sp++) == c)
			return (dp);
	}
	return (NULL);
}
