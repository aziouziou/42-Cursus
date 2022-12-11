/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms_signals.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abziouzi <abziouzi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 22:27:47 by abziouzi          #+#    #+#             */
/*   Updated: 2022/12/10 05:38:03 by abziouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"
#include <signal.h>

void	ms_signals(t_minishell *minishell)
{
	t_sigaction	sa;

	assign_siglist(minishell);
	memset(&sa, 0, sizeof(sa));
	sa.sa_sigaction = &ms_signals_handler;
	sa.sa_flags = 0;
	rl_catch_signals = 0;
	minishell->exit_status = 0;
	sa_mask(&sa);
	catch_signals(&sa);
}

void	assign_siglist(t_minishell *minishell)
{
	char	**sys_siglist;

	sys_siglist = minishell->siglist;
	memset(sys_siglist, 0, NSIG * sizeof(char));
	sys_siglist[SIGHUP] = "HangUp";
	sys_siglist[SIGQUIT] = "Quit";
	sys_siglist[SIGILL] = "Illegal Instruction";
	sys_siglist[SIGTRAP] = "BPT trace/trap";
	sys_siglist[SIGABRT] = "Abort instruction";
	sys_siglist[SIGFPE] = "Floating point exception";
	sys_siglist[SIGKILL] = "Killed";
	sys_siglist[SIGBUS] = "Bus error";
	sys_siglist[SIGSEGV] = "Segmentation fault";
	sys_siglist[SIGSYS] = "Bad system call";
	sys_siglist[SIGTERM] = "Terminated";
	sys_siglist[SIGURG] = "Urgent I/O condition";
	sys_siglist[SIGSTOP] = "Stopped (Signal)";
	sys_siglist[SIGTSTP] = "Stopped";
	sys_siglist[SIGTTIN] = "Stopped (tty input)";
	sys_siglist[SIGTTOU] = "Stopped (tty output)";
	sys_siglist[SIGIO] = "I/O ready";
	sys_siglist[SIGXCPU] = "CPU limit";
	sys_siglist[SIGXFSZ] = "File size limit";
	sys_siglist[SIGUSR1] = "User signal 1";
	sys_siglist[SIGUSR2] = "User signal 2";
}

void	ms_signals_handler(int signum, siginfo_t *siginfo, void *ptr)
{
	(void)ptr;
	(void)siginfo;
	if (signum == SIGINT)
	{
		if (g_minishell.state != MS_READING)
			return ;
		write(STDOUT_FILENO, "\n", 1);
		rl_on_new_line();
		rl_replace_line("", 0);
		rl_redisplay();
		g_minishell.exit_status = 1;
	}
}

void	sa_mask(t_sigaction *sa)
{
	sigemptyset(&sa->sa_mask);
	sigaddset(&sa->sa_mask, SIGINT);
	sigaddset(&sa->sa_mask, SIGQUIT);
}

void	catch_signals(t_sigaction *sa)
{
	sigaction(SIGINT, sa, NULL);
	sigaction(SIGQUIT, sa, NULL);
}
