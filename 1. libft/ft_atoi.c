/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abziouzi <abziouzi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 01:30:18 by abziouzi          #+#    #+#             */
/*   Updated: 2022/12/09 03:20:05 by abziouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: <stdlib.h>
** DESCRIPTION:
	The atoi() function converts the initial portion of the string
	pointed to by str into integer. Discards whitespace characters
	(' ' , '\r', '\n', '\f', '\v', '\t') from the beginning of the string.
	Accepts the optional "+" or "-" sign at the beggining of the string.
	Ignores additional non-numeric characters. Returns 0 for invalid number or no
	numeric string.
*/

int	ft_atoi(const char *str)
{
	unsigned int	i;
	unsigned int	res;
	int				neg;

	i = 0;
	res = 0;
	neg = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -neg;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	if (neg < 0 && res >= 2147483651)
		return (0);
	else if (res >= 2147483651)
		return (-1);
	return (res * neg);
}
