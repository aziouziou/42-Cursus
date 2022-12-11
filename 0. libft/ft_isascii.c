/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abziouzi <abziouzi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 01:32:30 by abziouzi          #+#    #+#             */
/*   Updated: 2022/12/09 03:16:45 by abziouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: <ctype.h>
** DESCRIPTION:
**	The isascii() function checks whether c is a 7-bit unsigned char value
	that fits into the ASCII character set.
*/

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
