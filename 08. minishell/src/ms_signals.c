/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms_signals.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abziouzi <abziouzi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 22:27:47 by abziouzi          #+#    #+#             */
/*   Updated: 2022/12/12 21:22:19 by abziouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

void	ms_signals()
{
	signal(SIGINT, &ms_signals_handler);
	signal(SIGQUIT, &ms_signals_handler);
}

void	ms_signals_handler(int signum)
{
	if (signum == SIGINT)
	{
		printf("\n");
		rl_on_new_line();
		rl_replace_line("", 0);
		g_minishell.exit_status = 1;
		exit(0);
	}
	rl_redisplay();
}
