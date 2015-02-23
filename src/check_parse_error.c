/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_parse_error.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvincent <pvincent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/06/18 17:01:55 by pvincent          #+#    #+#             */
/*   Updated: 2014/06/26 17:42:24 by hjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sh.h>
#include <libft.h>

int					ft_print_parse_error(char *error)
{
	ft_putstr_fd("42sh: Parse error: ", 2);
	ft_putendl_fd(error, 2);
	return (0);
}

int					ft_check_parse_error(t_list *cmds)
{
	t_elem			*elem;
	t_bloc			*bloc;

	elem = cmds->begin;
	while (elem)
	{
		bloc = elem->bloc;
		if (bloc->cmd[0] == '\0' || ((bloc->cmd[0] == ' ' ||
						bloc->cmd[0] == '\t') && bloc->cmd[1] == '\0'))
			return (ft_print_parse_error("empty command bitch"));
		if (elem == cmds->begin && bloc->sep_prev !=
				SEMICOLON && bloc->sep_prev != -1)
			return (ft_print_parse_error("sep begin"));
		if (elem->next == NULL && bloc->sep_next !=
				SEMICOLON && bloc->sep_next != -1)
			return (ft_print_parse_error("sep end"));
		if (ft_get_redir(bloc->cmd) != -1 && bloc->sep_next == PIPE)
			return (ft_print_parse_error("pipe after redir not supported"));
		elem = elem->next;
	}
	return (1);
}
