/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlavallo <rlavallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 14:45:46 by rlavallo          #+#    #+#             */
/*   Updated: 2014/11/09 17:37:26 by rlavallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	len;
	char	*dest;

	len = ft_strlen(str);
	if ((dest = (char *)malloc(sizeof(*dest) * len + 1)) == NULL)
		return (NULL);
	dest = ft_memcpy(dest, str, (len + 1));
	return (dest);
}
