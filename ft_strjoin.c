/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlavallo <rlavallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 16:15:11 by rlavallo          #+#    #+#             */
/*   Updated: 2014/11/10 16:26:04 by rlavallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	i;
	char	*dest;

	len1 = ft_strlen((char *)s1);
	len2 = ft_strlen((char *)s2);
	if ((dest = (char *)malloc(sizeof(char) * (len1 + len2) + 1)) == NULL)
		return (NULL);
	i = 0;
	while (i < len1 + len2)
	{
		dest[i] = ((i < len1) ? s1[i] : s2[i - len1]);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
