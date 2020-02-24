/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboville <cboville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 13:38:18 by sgalindo          #+#    #+#             */
/*   Updated: 2020/02/24 20:46:27 by cboville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include<fcntl.h>
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

char *read_map(char *example_file);
int	ft_strlen_mod(char *buff);

int main (int argc,char **argv)
{
	(void)argv;
	(void)argc;
	char *buff;

	buff = malloc(1);
	buff = read_map("example_file");

	
	ft_strlen_mod(buff);
	
	//printf("%s",buff);

	return (0);
}
