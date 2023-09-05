/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cd.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilabyed <ilabyed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:57:35 by ilabyed           #+#    #+#             */
/*   Updated: 2023/09/05 20:54:04 by ilabyed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void cd(char *path)
{
	t_env *home;
	t_env *current;

	if(!path)
		Get_to_home();
}

void Get_to_home()
{
	t_env *home;
	t_env *current;
	
	change_oldpwd();
	home = get_node("HOME");
	current = get_node("PWD");
	if(home && current)
	{
		current->value = home->value;
		chdir(home->value);
	}
	else
		printf("home not found");
}
void change_oldpwd();
{
	t_env *old;
	t_env *current;

	old =  get_node("OLDPWD");	
	currenrt =  get_node("PWD");
	if(old && current)
		old->value = current->value;
}