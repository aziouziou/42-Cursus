/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abziouzi <abziouzi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 00:13:31 by abziouzi          #+#    #+#             */
/*   Updated: 2022/10/01 00:13:31 by abziouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <fcntl.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_element
{
	int				value;
	int				index;
	struct s_element	*next;
}				t_element;

typedef struct s_word
{
	unsigned int	start;
	size_t			len;
}				t_word;

// Actions
int	check_if_sorted(t_element *stack);

void	swap(t_element **stack);

// Arguments processor :
int	argument_checker(char *argument);

void	**arguments_processor(t_element **stack, char **argv, int argc);
void	duplicates_checker(t_element *stack);

// Utils :



char	**ps_split(char const *s, char c);
char	*ps_substr(char const *s, unsigned int start, size_t len);

int	ps_isdigit(int c);

long	ft_atol(const char *str);

size_t	ps_strlen(const char *s);

void	ps_error(void);
void	ps_putstr_fd(char *s, int fd);

#endif
