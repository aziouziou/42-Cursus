/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms_lexer.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abziouzi <abziouzi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:49:51 by abziouzi          #+#    #+#             */
/*   Updated: 2022/12/09 17:57:51 by abziouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/minishell.h"

t_tokens	*ms_lexer(char *input)
{
	int			i;
	t_tokens	*tokens;

	i = 0;
	tokens = NULL;
	tokens = ms_init_tokens(tokens);
	if (tokens)
	{
		while (input[i])
			i = ms_tokenizer(tokens, input, i);
	}
	free(input);
	return (tokens);
}

int	ms_tokenizer(t_tokens *tokens, char *input, int i)
{
	(void)tokens;
	(void)input;
	
	return (i);
}


