/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abziouzi <abziouzi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 16:30:11 by abziouzi          #+#    #+#             */
/*   Updated: 2022/12/09 16:30:26 by abziouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ms_libft.h"

int ms_isspace(char *str)
{
	int	i;
	int	flag;

	i = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\f' || str[i] == '\v' || str[i] == '\r')
			flag = 1;
		else
		{
			flag = 0;
			break;
		}
		i++;
	}
	if (flag == 1)
		return (1);
	return (0);
}
