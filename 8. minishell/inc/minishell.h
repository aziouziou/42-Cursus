/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abziouzi <abziouzi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 04:35:09 by abziouzi          #+#    #+#             */
/*   Updated: 2022/12/12 21:18:54 by abziouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# define BUFFER_SIZE 4096

# define FALSE 0
# define TRUE 1

/* Defining Error Messages */

# define ERR_ACCESS		"Permission denied."
# define ERR_ARG		"[minishell] does not take any arguments"
# define ERR_MALLOC		"Malloc failed for [./minishell]"
# define ERR_READLINE	"Couldn't load READLINE for [./minishell]"

/* Including standard libraries */

# include <fcntl.h>
# include <errno.h>
# include <signal.h>
# include <stdbool.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <sys/time.h>
# include <sys/wait.h>
# include <unistd.h>

# include <readline/readline.h>
# include <readline/history.h>

/* Including custom libraries */

# include "env.h"
# include "ms_libft.h"


/* Structs & Enums*/

enum e_token_type
{
	ENV = '$',
	PIPE = '|',

	QUOTE = '\'',
	DOUBLE_QUOTE = '\"',

	REDIRECT_IN = '<',
	REDIRECT_OUT = '>',

	NEW_LINE = '\n',
	WHITESPACE = ' ',

	HERE_DOC,
	WORD,
};

enum e_token_state
{
	DEFAULT,
	ESCAPED,
	IN_QUOTE,
	IN_DOUBLE_QUOTE,
};

typedef struct s_token
{
	char				*value;

	int					len;

	enum e_token_type	type;
	enum e_token_state	state;

	struct s_token		*next;
	struct s_token		*prev;

}	t_token;

enum s_state
{
	MS_READING,
	MS_EXECUTING,
};

typedef struct s_tokens
{
	int				size;

	struct s_tokens	*head;
	struct s_tokens	*tail;

	t_token			token;

}	t_tokens;

typedef struct s_minishell
{
	char			*siglist[NSIG];

	enum s_state	state;

	int				exit_status;

	t_tokens		*tokens;

}	t_minishell;

t_minishell	g_minishell;


/*	main.c	& ms_utils.c	*/

int		ms_readline(char **input);

void	ms_init(t_minishell *minishell);
void	ms_run(char *envp[]);
void	ms_error(char *error_msg, int err_code);

/*	ms_signals.c	*/

void	ms_signals();
void	ms_signals_handler(int signum);

/*	ms_lexer.c	&	ms_lexer_utils.c	*/

int			ms_tokenizer(t_tokens *tokens, char *input, int i);

t_tokens	*ms_lexer(char *input);
t_tokens	*ms_init_tokens(t_tokens *tokens);

#endif
