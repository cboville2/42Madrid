/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb_otro.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboville <cboville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 13:57:04 by cboville          #+#    #+#             */
/*   Updated: 2020/02/10 18:40:30 by cboville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = 48;
	while (a < 57)
	{
		b = 48;
		while (b < 57)
		{
			c = 48;
			while (c <= 57)
			{
				if (a < b && b < c)
				{
					ft_putchar(a, b, c);
					if (a != 55)
						write(1, ", ", 2);
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

int		main(void)
{
	ft_print_comb();
}
