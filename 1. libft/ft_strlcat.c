/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abziouzi <abziouzi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 01:41:09 by abziouzi          #+#    #+#             */
/*   Updated: 2022/09/27 21:17:20 by abziouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: <strings.h>
** DESCRIPTION:
**	The strlcat() function appends string src to the end of dst. It will append
	at most dstsize – strlen(dst) – 1 characters. It will then NUL-terminate,
	unless dstsize is 0 or the original dst string was longer than dstsize
	(in practice this should not happen as it means that either dstsize is
	incorrect or that dst is not a proper string). It returns the combined
	length of both src and dst strings (not counting their terminating null
	characters). This result is used to determine whether the final string
	was truncated.
*/

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (dst[i] != '\0' && i < size)
		i++;
	j = i;
	while (src[i - j] && i < size - 1)
	{
		dst[i] = src[i - j];
		i++;
	}
	if (j < size)
		dst[i] = '\0';
	return (j + ft_strlen((char *) src));
}
