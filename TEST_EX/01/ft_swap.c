/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboville <cboville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 18:45:01 by cboville          #+#    #+#             */
/*   Updated: 2020/02/27 18:53:17 by cboville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

int	main(void)
{
	int y;
	int z; 

	y = 3;
	z = 6;

	printf("z=%d y=%d \n", y, z);
	ft_swap(&y, &z);
	printf("z=%d y=%d \n", y, z);

}
