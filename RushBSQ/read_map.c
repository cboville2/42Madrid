/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboville <cboville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 13:49:37 by sgalindo          #+#    #+#             */
/*   Updated: 2020/02/26 01:21:08 by cboville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "F_header.h"
#include "L_header.h"

char	*read_map(char *example_file)
{
	int		cont;
	int		map;
	char	*buff;

	cont = 0;
	map = 0;
	buff = malloc(1);
	map = open(example_file, O_RDONLY);
	if (map == -1)
	{
		write(1, "Error\n", 6);
		return (example_file);
	}
	else
	{
		while (read(map, buff, 1))
			cont++;
	}
	buff = malloc(cont);
	map = open(example_file, O_RDONLY);
	read(map, buff, cont);
	close(map);
	free(buff);
	return (buff);
}
