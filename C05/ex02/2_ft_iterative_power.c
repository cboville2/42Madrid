/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboville <cboville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 19:23:33 by cboville          #+#    #+#             */
/*   Updated: 2020/02/20 20:30:30 by cboville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int i;
	int n;

	i = power - 1;
	n = nb;

	if (power < 0 )
		return (0);

	else if (power == 0)
		return (1);

	while (i != 0)
	{
		nb = nb * n;
		i--;
	}
	return (nb);
}
