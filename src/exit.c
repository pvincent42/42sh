/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjeannin <hjeannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/25 23:55:32 by hjeannin          #+#    #+#             */
/*   Updated: 2014/06/26 19:01:45 by hjeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <sh.h>
#include <libft.h>

int						ft_exit(char **cmd, t_list *envi)
{
	char				*shlvl;

	(void)cmd;
	(void)envi;
	ft_putendl_fd("\033[32mexit\033[0m", 2);
	shlvl = ft_find_in_envi(envi, "SHLVL");
	if (shlvl[0] == '2')
		reset_term(&g_data->term);
	exit(0);
}
