/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abziouzi <abziouzi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 01:40:14 by abziouzi          #+#    #+#             */
/*   Updated: 2022/09/27 20:54:35 by abziouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** LIBRARY: N/A
** DESCRIPTION:
**	The ft_split() allocates (with malloc) and returns an array of strings
	obtained by splitting ’s’ using the character ’c’ as a delimiter.
	The array must be ended by a NULL pointer. It returns the array of new strings
	resulting from the split or NULL if the allocation fails.
*/

static int	ft_count_separators(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] == c)
		i++;
	return (i);
}

static void	ft_find_word(char const *s, char c, int index, t_word *word)
{
	int		lenght;
	int		words;
	int		i;

	lenght = 0;
	words = 0;
	i = ft_count_separators(s, c);
	while (s[i])
	{
		if (s[i] == c)
		{
			if (words == index)
				break ;
			while (s[i + 1] == c)
				i++;
			lenght = 0;
			words++;
		}
		else
			lenght++;
		i++;
	}
	word->len = lenght;
	word->start = i - lenght;
}

static int	ft_count_word(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**array;
	int		index;
	t_word	word;

	if (!s)
		return (NULL);
	words = ft_count_word(s, c);
	array = malloc(sizeof(char *) * (words + 1));
	if (!array)
		return (NULL);
	index = 0;
	while (index < words)
	{
		ft_find_word(s, c, index, &word);
		array[index] = ft_substr(s, word.start, word.len);
		index++;
	}
	array[index] = 0;
	return (array);
}
