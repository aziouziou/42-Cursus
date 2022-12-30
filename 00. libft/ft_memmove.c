/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abziouzi <abziouzi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 01:38:41 by abziouzi          #+#    #+#             */
/*   Updated: 2022/09/27 20:51:45 by abziouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: <strings.h>
** DESCRIPTION:
**		The memmove() function copies len bytes from memory area src to memory
		area dst. The memory areas may overlap: copying takes place as though the
		bytes in src are first copied into a temporary array that does not overlap src
		or dst, and the bytes are then copied from the temporary array to dst.
		It returns a pointer to dst.
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!dst && !src)
		return (0);
	if (src < dst)
	{
		while (len > 0)
		{
			((unsigned char *)dst)[len - 1] = ((unsigned char *)src)[len - 1];
			len--;
		}
	}
	else if (src > dst)
		ft_memcpy(dst, src, len);
	return (dst);
}
