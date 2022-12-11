/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abziouzi <abziouzi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 02:32:27 by abziouzi          #+#    #+#             */
/*   Updated: 2022/10/01 02:32:27 by abziouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

char	*ps_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	len_s;
	size_t	size_malloc;
	char	*ptr;

	if (!s)
		return (0);
	i = 0;
	len_s = ps_strlen(s);
	size_malloc = 0;
	while (size_malloc < len && size_malloc < len_s)
		size_malloc++;
	ptr = (char *)malloc((size_malloc + 1) * sizeof(char));
	if (!ptr)
		return (0);
	while (s[i] != '\0' && i < len && start < len_s)
	{
		ptr[i] = s[start];
		start++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
