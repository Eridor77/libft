/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlavallo <rlavallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 13:25:47 by rlavallo          #+#    #+#             */
/*   Updated: 2014/11/10 13:33:10 by rlavallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*dest;
	unsigned int	len;
	unsigned int	i;

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
			dest[i] = (*f)(i, s[i]);
			i++;
		}
		dest[i] = '\0';
		return (dest);
	}
	return (NULL);
}
