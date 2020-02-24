/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboville <cboville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 13:49:37 by sgalindo          #+#    #+#             */
/*   Updated: 2020/02/24 17:26:06 by cboville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<fcntl.h>
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

char *read_map(char *example_file)
{
	int cont = 0;
	int map = 0;
	char *buff = malloc(1);

	map = open(example_file, O_RDONLY);
	if (map == -1)
	{
		write(1, "Error\n", 6);
		return(example_file);
	}
	else
	{
		while (read(map, buff, 1))
			cont++;
	}
	close(map);
	free(buff);
	buff = malloc(cont);
	map = open(example_file, O_RDONLY);
	read(map, buff, cont);
	close(map);
	return(buff);
}