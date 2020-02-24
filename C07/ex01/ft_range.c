/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboville <cboville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 02:17:51 by cboville          #+#    #+#             */
/*   Updated: 2020/02/24 04:45:32 by cboville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int *str;
	int i;
	int n;

	i = 0;
	n = min;
	str = malloc((max - min) * 4);
	if (str == NULL)
		return (NULL);
	if (min >= max)
		return (NULL);
	while (i < max)
	{
		str[0] = n;
		i++;
		n++;
		printf("%d", *str);
	}
	return (str);
}
