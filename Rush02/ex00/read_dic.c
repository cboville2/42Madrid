/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_dic.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboville <cboville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 16:07:52 by cboville          #+#    #+#             */
/*   Updated: 2020/02/23 20:50:40 by cboville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>

char	*read_dic(char *dic)
{
	int		cont;
	int		fd;
	char	*buff;

	buff = malloc(1);
	cont = 0;
	fd = 0;
	fd = open(dic, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Dict Error\n", 11);
	}
	else
	{
		while (read(fd, buff, 1))
			cont++;
	}
	close(fd);
	free(buff);
	buff = malloc(cont);
	fd = open(dic, O_RDONLY);
	read(fd, buff, cont);
	close(fd);
	return (buff);
}
