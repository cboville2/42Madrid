/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filter_keys.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboville <cboville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 18:52:04 by cboville          #+#    #+#             */
/*   Updated: 2020/02/23 20:47:14 by cboville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	ft_putnbr(char c);

char	*filter_keys(char *str, char *buff)
{
	int i;
	int j;

	buff = malloc(1);
	i = 0;
	j = 0;
	while (!(buff[i] >= 'a' && buff[i] <= 'z')
	|| (buff[i] >= 'A' && buff[i] <= 'Z'))
	{
		i++;
		while ((buff[i] >= 'a' && buff[i] <= 'z')
		|| (buff[i] >= 'A' && buff[i] <= 'Z'))
		{
			str[j] = buff[i];
			ft_putnbr(str[j]);
			j++;
		}
	}
	return (str);
}
