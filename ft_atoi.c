/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlavallo <rlavallo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 15:45:24 by rlavallo          #+#    #+#             */
/*   Updated: 2015/09/28 16:16:26 by rlavallo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int is_negative;
	int value;

	is_negative = 0;
	value = 0;
	while ((*str == ' ') || (*str == '\t') || (*str == '\n') || (*str == '\r')
			|| (*str == '\v') || (*str == '\f'))
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		str++;
		is_negative = 1;
	}
	while ((*str <= '9') && (*str >= '0'))
	{
		value = value * 10 + *str - '0';
		str++;
	}
	if (is_negative)
		value = -value;
	return (value);
}
