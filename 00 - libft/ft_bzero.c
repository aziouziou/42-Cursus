/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abziouzi <abziouzi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 01:30:37 by abziouzi          #+#    #+#             */
/*   Updated: 2022/12/09 03:18:02 by abziouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: <strings.h>
** DESCRIPTION:
	The bzero() function writes n zeroed bytes to the string s. If n is zero,
	bzero() does nothing.
*/

void	ft_bzero(void *s, size_t n)
{
	unsigned long	index;
	unsigned char	*tmp;

	index = 0;
	tmp = (unsigned char *) s;
	while (index < n)
	{
		tmp[index] = '\0';
		index++;
	}
}
