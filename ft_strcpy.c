/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlavallo <rlavallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 17:58:01 by rlavallo          #+#    #+#             */
/*   Updated: 2015/09/28 16:13:35 by rlavallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, char *src)
{
	char	*ret;
	size_t	i;

	ret = dest;
	i = 0;
	while (i < ft_strlen(src))
	{
		dest[i] = src[i];
		i++;
	}
	return (ret);
}
