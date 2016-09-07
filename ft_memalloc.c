/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlavallo <rlavallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 15:22:38 by rlavallo          #+#    #+#             */
/*   Updated: 2016/02/16 13:22:24 by rlavallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*a;

	if ((int)size < 0)
		return (NULL);
	if ((a = malloc(sizeof(char) * size)) == NULL)
		return (NULL);
	a = ft_memset(a, 0, size);
	return (a);
}
