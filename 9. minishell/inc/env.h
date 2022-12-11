/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abziouzi <abziouzi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:20:16 by abziouzi          #+#    #+#             */
/*   Updated: 2022/11/29 11:24:02 by abziouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENV_H
# define ENV_H

/*	Environment Structs */

typedef struct s_env_element
{
	char					*key;
	char					*value;
	struct s_env_element	*next;
	struct s_env_element	*prev;
}	t_env_element;

typedef struct s_env
{
	t_env_element	*head;
	char			**env;
	int				size;
}	t_env;

/*	Environment Functions */



#endif
