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

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	if (!(*s2))
		return ((char*)s1);
	if (!(*s1) || n == 0)
		return (NULL);
	if (*s1 == *s2)
		if (ft_strnstr(s1 + 1, s2 + 1, n - 1) - 1 == s1)
			return ((char*)s1);
	return (ft_strnstr(s1 + 1, s2, n - 1));
}
