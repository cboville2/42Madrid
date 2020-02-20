/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboville <cboville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 17:23:05 by cboville          #+#    #+#             */
/*   Updated: 2020/02/20 19:11:53 by cboville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int i;

	i = nb - 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (i < nb && i != 0)
	{
		nb = nb * i;
		i--;
	}
	return (nb);
}
