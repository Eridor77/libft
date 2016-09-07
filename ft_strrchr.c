/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlavallo <rlavallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 17:40:18 by rlavallo          #+#    #+#             */
/*   Updated: 2016/01/21 08:40:13 by rlavallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s) + 1;
	while (--len)
	{
		if (s[len] == (char)c)
			return ((char*)s + len);
	}
	if (s[len] == (char)c)
		return ((char*)s + len);
	return (NULL);
}
