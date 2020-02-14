/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboville <cboville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/11 18:15:38 by cboville          #+#    #+#             */
/*   Updated: 2020/02/12 12:45:44 by cboville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void 	ft_ft(int *nbr);

int main(void)
{
	int a;
	int *nbr;
	
	a = 36;
	nbr = &a;

	ft_ft(nbr);
	printf("%d", *nbr);
}
