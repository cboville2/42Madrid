/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboville <cboville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 11:12:28 by cboville          #+#    #+#             */
/*   Updated: 2020/02/08 16:54:38 by cboville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int l;
	int g;

	l = 1;
	while (l <= y)
	{
		g = 1;
		while (g <= x)
		{
			if ((g == 1 && l == 1) || (l == 1 && g == x))
				ft_putchar('o');
			else if ((g == 1 && l == y) || (l == y && g == x))
				ft_putchar('o');
			else if ((l == 1 && g > 1 && g < x) || (l == y && g > 1 && g < x))
				ft_putchar('-');
			else if ((g == 1 && l > 1 && l < y) || (g == x && l > 1 && l < y))
				ft_putchar('|');
			else
				ft_putchar(' ');
			g++;
		}
		ft_putchar('\n');
		l++;
	}
}