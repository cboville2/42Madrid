/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboville <cboville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 19:42:32 by cboville          #+#    #+#             */
/*   Updated: 2020/02/14 10:14:46 by cboville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int j;
	int aux;

	i = 0;
	j = size;
	while (i < (size / 2))
	{
		aux = tab[i];
		tab[i] = tab[j];
		tab[j] = aux;
		i++;
		j--;
	}
}
