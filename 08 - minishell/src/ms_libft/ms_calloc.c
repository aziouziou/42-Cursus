/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abziouzi <abziouzi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 16:44:12 by abziouzi          #+#    #+#             */
/*   Updated: 2022/12/09 17:53:10 by abziouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ms_libft.h"

static void	ms_bzero(void *s, size_t n)
{
	while (n--)
		*((unsigned char *)(s + n)) = 0;
}

void	*ms_calloc(size_t count, size_t size)
{
	void	*res;

	res = malloc(size * count);
	if (!res)
		return (0);
	ms_bzero(res, size * count);
	return (res);
}
