/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlavallo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 08:44:44 by rlavallo          #+#    #+#             */
/*   Updated: 2016/01/21 08:44:49 by rlavallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	count(int n, size_t *len, int *w)
{
	*len = 1;
	if (n >= 0)
	{
		*len = 0;
		n = -n;
	}
	*w = 1;
	while (n / *w < -9)
	{
		*w *= 10;
		*len += 1;
	}
}

char		*ft_itoa(int n)
{
	size_t	len;
	size_t	pos;
	int		w;
	char	*str;

	count(n, &len, &w);
	if ((str = (char *)malloc(sizeof(*str) * (len + 1))) == NULL)
		return (NULL);
	pos = 0;
	if (n < 0)
	{
		str[pos] = '-';
		pos++;
	}
	if (n > 0)
		n = -n;
	while (w >= 1)
	{
		str[pos++] = -(n / w % 10) + 48;
		w /= 10;
	}
	str[pos] = '\0';
	return (str);
}
