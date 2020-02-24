/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboville <cboville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 13:16:37 by cboville          #+#    #+#             */
/*   Updated: 2020/02/23 20:03:07 by cboville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

char	*read_dic(char *dic);
char	*filter_keys(char *str, char *buff);

int		main(int argc, char **argv)
{
	char *buff;
	char *newdic;

	buff = malloc(1);
	if (argc == 3)
	{
		newdic = read_dic(argv[1]);
		buff = filter_keys(argv[2], buff);
		printf("%s", buff);
	}
	if (argc == 2)
	{
		buff = filter_keys(argv[1], buff);
		printf("%s", buff);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
