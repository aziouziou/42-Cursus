/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abziouzi <abziouzi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 01:32:59 by abziouzi          #+#    #+#             */
/*   Updated: 2022/12/09 03:17:50 by abziouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: <ctype.h>
** DESCRIPTION:
**	The isdigit() function tests if a character c corresponds to a decimal digit
	character (48 to 57 at ASCII).
*/

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
