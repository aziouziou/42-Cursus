/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abziouzi <abziouzi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 01:36:28 by abziouzi          #+#    #+#             */
/*   Updated: 2022/09/27 21:20:28 by abziouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: N/A
** DESCRIPTION:
**	The ft_itoa() function allocates (with malloc)) and returns a string
	representing the integer received as an argument. Negative numbers must be
	handled. It returns the string representing the integer or NULL if the
	allocation fails. */

int	strlen_number(int n)
{
	int				i;
	unsigned int	nb;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		nb = -n;
		i++;
	}
	else
		nb = n;
	while (nb != 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

unsigned int	ft_abs(int n)
{
	if (n < 0)
		return ((unsigned int)-n);
	return (n);
}

char	*ft_itoa(int n)
{
	int				strlen;
	unsigned int	nb;
	char			*number;

	strlen = strlen_number(n);
	number = malloc(sizeof(char) * (strlen + 1));
	if (!number)
		return (NULL);
	if (n < 0)
		number[0] = '-';
	nb = ft_abs(n);
	number[strlen--] = '\0';
	if (nb == 0)
		number[strlen] = '0';
	else
	{
		while (nb != 0)
		{
			number[strlen--] = nb % 10 + '0';
			nb = nb / 10;
		}
	}
	return (number);
}
