/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abziouzi <abziouzi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 01:42:31 by abziouzi          #+#    #+#             */
/*   Updated: 2022/09/27 21:14:08 by abziouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: N/A
** DESCRIPTION:
**	The ft_strtrim() function allocates (with malloc) and returns a copy of ’s1’
	with the characters specified in ’set’ removed from the beginning and the end
	of the string. It returns the trimmed string or NULL if the allocation fails.
*/

int	contains(char c, char const *set)
{
	int	i;

	if (!c || !set)
		return (0);
	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	get_start(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i] && contains(s1[i], set))
		i++;
	return (i);
}

int	get_end(char const *s1, char const *set)
{
	int	i;

	i = ft_strlen(s1);
	while (contains(s1[i - 1], set))
		i--;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	int		start;
	int		end;

	if (!s1)
		return (NULL);
	start = get_start(s1, set);
	end = get_end(s1, set);
	if (end < start)
		return (ft_strdup(""));
	new = ft_substr(s1, start, end - start);
	if (!new)
		return (NULL);
	return (new);
}
