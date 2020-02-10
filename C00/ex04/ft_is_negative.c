/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboville <cboville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/07 13:06:28 by cboville          #+#    #+#             */
/*   Updated: 2020/02/10 00:03:51 by cboville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char b;

	if (n >= 0)
	{
		b = 'P';
		write(1, &b, 1);
	}
	if (n < 0)
	{
		b = 'N';
		write(1, &b, 1);
	}
}

int		main(void)
{
	ft_is_negative(36);
}
