/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalindo <sgalindo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 13:38:18 by sgalindo          #+#    #+#             */
/*   Updated: 2020/02/26 21:18:57 by sgalindo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "F_header.h"
#include "L_header.h"

int		ft_strlen(char *buff);

int main (int argc,char **argv)
{
	(void)argv;
	(void)argc;
	char *buff;
	int i;

	i = 0;

	buff = read_map("example_file");
	//buff = (char)malloc((ft_strlen(*buff)) * sizeof(char));

	write(1, "Sounds good, doesn't work \nAt least we tried ¯\\_(ツ)_/¯ \nSarica & Ovejica\n", 78);

	return (0);
}
