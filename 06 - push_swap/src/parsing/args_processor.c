/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abziouzi <abziouzi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 00:14:03 by abziouzi          #+#    #+#             */
/*   Updated: 2022/10/01 00:14:03 by abziouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	**arguments_processor(t_element **stack, char **argv, int argc)
{
	// int		i;
	int		index;
	char	**arguments;

	index = argc - 1;
	while (index > 0)
	{
		if (argument_checker(argv[index]))
		{
			arguments = ps_split(argv[index], ' ');
			printf("arguments: %s\n", *arguments);
		}
		index--;
	}
	// duplicates_checker(*stack_a);
}

int	argument_checker(char *argument)
{
	int	i;

	i = 0;
	while (argument[i])
	{
		if (argument[i] == ' ' || ps_isdigit(argument[i])
			|| (argument[i] == '-' && ps_isdigit(argument[i + 1]))
			|| (argument[i] == '+' && ps_isdigit(argument[i + 1])))
			i++;
		else
			ps_error();
	}
	return (1);
}

void	duplicates_checker(t_element *stack)
{
	int			count;
	t_element	*tmp;
	t_element	*tmp_2;

	tmp = stack;
	while (tmp)
	{
		count = 0;
		tmp_2 = tmp;
		while (tmp_2)
		{
			if (tmp_2->value == tmp->value)
			{
				count++;
				if (count >= 2)
					ps_error();
			}
			tmp_2 = tmp_2->next;
		}
		tmp = tmp->next;
	}
}
