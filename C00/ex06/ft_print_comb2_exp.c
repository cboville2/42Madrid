/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2_exp.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboville <cboville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/10 10:34:14 by cboville          #+#    #+#             */
/*   Updated: 2020/02/10 16:30:59 by cboville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar((a / 10) + 48); 
				//si a=0 -> 0 / a=1 -> 0 / ... / a=9 -> 0 / a=10 -> 1 / a=11 -> 1 / a=23 -> 2... --> PRIMER NUMERO
			ft_putchar((a % 10) + 48);
				//si a=0 -> 0 / a=1 -> 1 / ... / a=9 -> 9 / a=10 -> 0 / a=11 -> 1 / a=23 -> 3... --> SEGUNDO NUMERO
			ft_putchar(' ');
			ft_putchar((b / 10) + 48);
				//si a=0 -> b=1 -> 0 / ... / si a=9 -> b=10 -> 1 / si a=23 -> b=24 --> 2... --> PRIMER NUMERO
			ft_putchar((b % 10) + 48);
				//si a=0 -> b=1 -> 1/ si a=1 -> b=2 -> 2 / ... / si a=23 -> b=24 --> 4... --> SEGUNDO NUMERO
			if (a != 98 || b != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			b++;
		}
		a++;
	}
}

int		main(void)
{
	ft_print_comb2();
}
