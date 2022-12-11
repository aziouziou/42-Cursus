/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abziouzi <abziouzi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 16:51:41 by abziouzi          #+#    #+#             */
/*   Updated: 2022/12/09 16:47:56 by abziouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

int	ms_readline(char **input)
{
	*input = readline("> minishell-$ ");
	g_minishell.state = MS_EXECUTING;
	if (!input)
		return (-1);
	else
	{
		ms_error(ERR_READLINE, 1);
		free(input);
	}
	return (0);
}

void	ms_error(char *error_msg, int err_code)
{
	printf("%s.\n", error_msg);
	exit(err_code);
}

