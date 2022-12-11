/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abziouzi <abziouzi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 01:38:25 by abziouzi          #+#    #+#             */
/*   Updated: 2022/09/27 21:22:22 by abziouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: <strings.h>
** DESCRIPTION:
**	The memcmp() function compares the first n bytes (each interpreted as
	unsigned char) of the memory areas s1 and s2. It returns an integer less
	than, equal to, or greater than zero if the first n bytes of s1 is found,
	respectively, to be less than, to match, or be greater than the first n
	bytes of s2. 	For a nonzero return value, the sign is determined by the
	sign of the difference between the first pair of bytes (interpreted as
	unsigned char) that differ in s1 and s2. */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (((unsigned char *)s1)[i] == ((unsigned char *)s2)[i] && i < n - 1)
		i++;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
