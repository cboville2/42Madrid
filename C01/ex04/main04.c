/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboville <cboville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 14:56:11 by cboville          #+#    #+#             */
/*   Updated: 2020/02/12 15:11:20 by cboville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	int c;
	int d;

	c = 36;
	d = 10;

	ft_ultimate_div_mod(&c, &d);
	printf("y=%d z=%d", c, d);
}