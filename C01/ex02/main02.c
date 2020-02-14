/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboville <cboville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 13:06:07 by cboville          #+#    #+#             */
/*   Updated: 2020/02/12 14:25:51 by cboville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b);

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