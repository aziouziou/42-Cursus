/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abziouzi <abziouzi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 01:40:41 by abziouzi          #+#    #+#             */
/*   Updated: 2022/09/27 20:57:32 by abziouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: <strings.h>
** DESCRIPTION:
**	The strncmp() compares bytes of s1 and s2. It returns an integer less than,
	 equal to, or greater than zero if s1 (or the first n bytes thereof) is found,
	 respectively, to be less than, to match, or be greater than s2.
*/

int	ft_strcmp(const char *a, const char *b)
{
	int	i;

	if (!a || !b || ft_strlen(a) != ft_strlen(b))
		return (0);
	i = -1;
	while (a[++i])
	{
		if (a[i] != b[i])
			return (0);
	}
	return (1);
}
