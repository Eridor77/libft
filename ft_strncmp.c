/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlavallo <rlavallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 19:26:51 by rlavallo          #+#    #+#             */
/*   Updated: 2016/01/21 08:38:28 by rlavallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		if (s1[i] == '\0' && s2[i] == '\200')
			return (-1);
		if (s1[i] == '\200' && s2[i] == '\0')
			return (1);
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		i++;
		n--;
	}
	return (0);
}
