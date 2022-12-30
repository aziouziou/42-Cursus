/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abziouzi <abziouzi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 00:15:02 by abziouzi          #+#    #+#             */
/*   Updated: 2022/10/01 00:15:02 by abziouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

int	main(int argc, char *argv[])
{
	t_element	*stack_a;
	t_element	*stack_b;

	if (argc == 1)
		return (0);
	stack_b = NULL;
	printf("Hello from push_swap\n");
	arguments_processor(&stack_a, argv, argc);


	printf("ByeBye from push_swap\n");
	return (0);
}
