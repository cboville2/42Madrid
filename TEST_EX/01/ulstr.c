/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboville <cboville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 16:59:40 by cboville          #+#    #+#             */
/*   Updated: 2020/02/27 18:02:08 by cboville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while(argv[1][i])
		{
			if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				argv[1][i] += 32;
				write(1, &argv[1][i], 1);
			}
			else if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				argv[1][i] -= 32;
				write(1, &argv[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
}