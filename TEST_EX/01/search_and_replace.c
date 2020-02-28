/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboville <cboville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 15:52:45 by cboville          #+#    #+#             */
/*   Updated: 2020/02/27 17:02:33 by cboville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	if(argc == 4)
	{
		if(argv[2][1] == '\0' && argv[3][1] == '\0')
		{
			while(argv[1][i])
			{
				if(argv[1][i] == *argv[2])
					argv[1][i] = *argv[3];
				write(1, &argv[1][i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
}
