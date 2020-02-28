/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboville <cboville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 19:26:27 by cboville          #+#    #+#             */
/*   Updated: 2020/02/27 20:20:42 by cboville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
	int i;
	int space;

	i = 0;
	space = 0;
	if(argc == 2)
	{
		while(argv[1][i] != '\0')
			i++;
		i--;

		while(argv[1][i] == ' ' || argv[1][i] == '\t')
		{
			i--;
			space++;
		}

		while((argv[1][i] != '\0') && (!(argv[1][i] == ' ' || argv[1][i] == '\t')))
			i--;
		i++;

		while(argv[1][i + space] != '\0')
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
