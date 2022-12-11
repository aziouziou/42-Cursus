/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms_libft.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abziouzi <abziouzi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 16:24:49 by abziouzi          #+#    #+#             */
/*   Updated: 2022/12/10 03:11:08 by abziouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MS_LIBFT_H
# define MS_LIBFT_H

# include "minishell.h"

char	*ms_strdup(const char *s);
char	*ms_substr(char const *s, unsigned int start, int len);

int		ms_isspace(char *str);

int		ms_strlen(const char *str);

void	*ms_calloc(size_t count, size_t size);

#endif
