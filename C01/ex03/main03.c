/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboville <cboville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 14:33:09 by cboville          #+#    #+#             */
/*   Updated: 2020/02/12 14:42:43 by cboville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
	int a;
	int b;

	int div;
	int mod;

	a = 36;
	b = 10;

	ft_div_mod(a, b, &div, &mod);
	printf("div=%d mod=%d \n", div, mod);
}