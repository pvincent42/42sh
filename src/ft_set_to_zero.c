/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_to_zero.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavid <rdavid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/06/26 19:04:38 by rdavid            #+#    #+#             */
/*   Updated: 2014/06/26 19:06:00 by rdavid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_set_to_zero(int *sep)
{
	int		i;

	i = 0;
	while (i != 5)
	{
		sep[i] = 0;
		i++;
	}
}
