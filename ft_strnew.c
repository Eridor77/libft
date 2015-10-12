/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlavallo <rlavallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 16:04:12 by rlavallo          #+#    #+#             */
/*   Updated: 2014/11/09 17:12:56 by rlavallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	i;

	if ((str = (char *)malloc(sizeof(char *) * size + 1)) == NULL)
		return (NULL);
	i = 0;
	while (i != size)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}
