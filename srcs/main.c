/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <cristian-ceban@mail.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 13:58:26 by cciobanu          #+#    #+#             */
/*   Updated: 2016/11/18 22:02:09 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_error(char *str)
{
	ft_putendl(str);
	exit(0);
}

int		main(int argc, char **argv)
{
	t_block *block;
	char	*str;
	char	**result;
	int		size;

	if (argc != 2)
		ft_error("Argumets number error");
	else
		str = ft_reading(argv[1]);
	block = ft_create(str);
	size = map_size(block);
	block = ft_xy(block);
	result = ft_result(block, size);
	free(block);
	while (*result)
		ft_putendl(*result++);
	return (0);
}
