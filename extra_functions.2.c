/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra_functions.2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfauvell <cfauvell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 14:46:00 by psentilh          #+#    #+#             */
/*   Updated: 2019/01/23 14:35:36 by cfauvell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			stop_condition(t_tetri *tetri, t_point *np)
{
	if (tetri->piece == NULL)
	{
		ft_memdel((void **)&np);
		return (SUCCESS);
	}
	if (np == NULL)
		return (FAILURE);
	return (-1);
}

void		free_point(t_point *point)
{
	static int	count = 0;

	count++;
	if (count != 1)
		ft_memdel((void **)&point);
}

int			check_fd(int fd, char *buff)
{
	if (fd == -1)
	{
		free(buff);
		return (0);
	}
	return (1);
}
