/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main07.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboville <cboville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 21:15:08 by cboville          #+#    #+#             */
/*   Updated: 2020/02/21 14:49:52 by cboville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size);

int		main(void)
{
	int i;

	int tab[5] = {1, 2, 3, 4};
	int size = 4;
	ft_rev_int_tab(tab, size);

	write(1, &tab[5], 5);
}
