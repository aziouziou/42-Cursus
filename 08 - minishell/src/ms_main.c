/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abziouzi <abziouzi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 04:34:05 by abziouzi          #+#    #+#             */
/*   Updated: 2022/12/12 21:18:58 by abziouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

int	main(int argc, char *argv[], char *envp[])
{
	if ((argc > 1 && argv) || !envp)
		ms_error(ERR_ARG, 1);
	else
		ms_init(&g_minishell);
		ms_signals();
		ms_run(envp);
	return (0);
}

void	ms_init(t_minishell *minishell)
{
	minishell->exit_status = 0;
}

void	ms_run(char *envp[])
{
	(void)envp;

	char	*input;

	input = NULL;
	while (TRUE)
	{
		if (ms_readline(&input))
			continue ;
		g_minishell.tokens = ms_lexer(input);
	}
}
