/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abziouzi <abziouzi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 01:41:03 by abziouzi          #+#    #+#             */
/*   Updated: 2022/09/27 21:06:39 by abziouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: N/A
** DESCRIPTION:
**	The ft_strjoin() function allocates (with malloc) and returns a new string,
	which is the result of the concatenation of ’s1’ and ’s2’. It returns the new
	string or NULL if the allocation fails.*/

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*new;
	int		index;

	if (!s1 || !s2)
		return (NULL);
	new = malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char));
	if (!new)
		return (NULL);
	index = 0;
	while (s1[index])
	{
		new[index] = s1[index];
		index++;
	}
	index = 0;
	while (s2[index])
	{
		new[ft_strlen(s1) + index] = s2[index];
		index++;
	}
	new[ft_strlen(s1) + index] = '\0';
	return (new);
}
