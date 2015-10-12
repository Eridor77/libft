/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlavallo <rlavallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 16:54:22 by rlavallo          #+#    #+#             */
/*   Updated: 2014/11/09 19:39:21 by rlavallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*dest;
	int		len;
	int		i;

	if (s != NULL && f != NULL)
	{
		len = 0;
		while (s[len] != '\0')
			len++;
		if ((dest = (char *)malloc(sizeof(char) * len + 1)) == NULL)
			return (NULL);
		i = 0;
		while (i != len)
		{
			dest[i] = (*f)(s[i]);
			i++;
		}
		dest[i] = '\0';
		return (dest);
	}
	return (NULL);
}
