/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abziouzi <abziouzi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 01:39:58 by abziouzi          #+#    #+#             */
/*   Updated: 2022/09/27 21:19:17 by abziouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: N/A
** DESCRIPTION:
**	The ft_putnstr() function outputs the string ’s’ to the standard output
	limited to n chars.
*/

void	ft_putnstr(char *s, int n)
{
	if (!s)
		ft_putnstr("(null)", n);
	else
	{
		while (*s && n > 0)
		{
			write(1, s, 1);
			s++;
			n--;
		}
	}
}
