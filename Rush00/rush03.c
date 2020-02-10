/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboville <cboville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 11:12:28 by cboville          #+#    #+#             */
/*   Updated: 2020/02/09 21:01:08 by cboville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int l;
	int g;

	l = 1;
	while (l <= y && !(x <= 0 || y <= 0))
	{
		g = 1;
		while (g <= x)
		{
			if ((g == 1 && l == 1) || (g == 1 && l == y))
				ft_putchar('A');
			else if ((l == 1 && g == x) || (g == x && l == y))
				ft_putchar('C');
			else if (l == 1 || g == 1 || l == y || g == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			g++;
		}
		ft_putchar('\n');
		l++;
	}
	if (x <= 0 || y <= 0)
		write(1, "INPUT ERROR: PLEASE INSERT POSITIVE VALUES  \n", 50);
}
