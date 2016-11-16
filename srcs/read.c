/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cciobanu <cristian-ceban@mail.ru>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 13:59:43 by cciobanu          #+#    #+#             */
/*   Updated: 2016/11/15 20:04:12 by cciobanu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_reading(char *input)
{
	int		fd;
	int		i;
	char	tmp[545];
	char	buf[1];
	int		rd;

	i = 0;
	if ((fd = open(input, O_RDONLY)) == -1)
		ft_error("Open error");
	while ((rd = read(fd, buf, 1)))
	{
		tmp[i] = buf[0];
		i++;
		if (i > 545)
			ft_error("Big nummber of character");
	}
	tmp[i] = '\0';
	if (close(fd) == -1)
		ft_error("Close error");
	return (ft_strdup(tmp));
}
