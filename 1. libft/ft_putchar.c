/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abziouzi <abziouzi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 01:39:07 by abziouzi          #+#    #+#             */
/*   Updated: 2022/09/27 21:20:40 by abziouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: <stdio.h>
** DESCRIPTION:
**	The ft_putchar()  writes the string s to stream, without its terminating
	null byte.
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
