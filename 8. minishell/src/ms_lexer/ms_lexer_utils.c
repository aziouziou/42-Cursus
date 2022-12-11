/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms_lexer_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abziouzi <abziouzi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 16:17:11 by abziouzi          #+#    #+#             */
/*   Updated: 2022/12/09 17:52:36 by abziouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/minishell.h"

t_tokens	*ms_init_tokens(t_tokens *tokens)
{
	tokens = ms_calloc(sizeof(t_tokens), 1);
	if (!tokens)
		return (NULL);
	return (tokens);
}
