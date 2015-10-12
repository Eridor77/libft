/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlavallo <rlavallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 17:09:08 by rlavallo          #+#    #+#             */
/*   Updated: 2015/09/28 16:11:50 by rlavallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	len;
	int		i;
	int		j;
	int		k;
	char	*dest;

	len = ft_strlen((char *)s);
	j = 0;
	k = len;
	while ((s[j] == ' ' || s[j] == '\n' || s[j] == '\t') && s[j + 1] != '\0')
		j++;
	while ((s[k - 1] == ' ' || s[k - 1] == '\n' || s[k - 1] == '\t') && k > j)
		k--;
	len = k - j;
	if ((dest = (char *)malloc(sizeof(char *) * len + 1)) == NULL)
		return (NULL);
	i = 0;
	while (j != k)
	{
		dest[i] = s[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
