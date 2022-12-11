/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abziouzi <abziouzi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 16:27:26 by abziouzi          #+#    #+#             */
/*   Updated: 2022/12/09 16:28:02 by abziouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ms_libft.h"

char	*ms_substr(char const *s, unsigned int start, int len)
{
	char			*ptr;
	int				i;
	unsigned int	s_len;

	if (!s)
		return (NULL);
	i = 0;
	s_len = ms_strlen(s);
	if (start >= s_len)
		return (ms_strdup(""));
	if (len > ms_strlen(&s[start]))
		len = ms_strlen(&s[start]);
	ptr = (char *) malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	while (i < len)
		ptr[i++] = s[start++];
	ptr[i] = '\0';
	return (ptr);
}
