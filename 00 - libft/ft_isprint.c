/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abziouzi <abziouzi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 01:33:44 by abziouzi          #+#    #+#             */
/*   Updated: 2022/12/09 03:16:30 by abziouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: <ctype.h>
** DESCRIPTION:
**	The isprint() function tests if a character c is printable according to
	ASCII table, including space. That is, between 32-126 at ASCII, inclusive.
*/

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
