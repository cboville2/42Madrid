/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboville <cboville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 19:42:32 by cboville          #+#    #+#             */
/*   Updated: 2020/02/21 14:52:46 by cboville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int j;
	int aux;

	i = 0;
	j = size - 1;
	while (i <= (size / 2))
	{
		aux = tab[i];
		tab[i] = tab[j];
		tab[j] = aux;
		printf("%c", tab[i]);
		i++;
		j--;
	}
}

int		main(void)
{
	int i;

	int tab[5] = {1, 2, 3, 4};
	int size = 4;
	ft_rev_int_tab(tab, size);

	//write(1, &tab[5], 5);
}
