/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboville <cboville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 12:03:16 by cboville          #+#    #+#             */
/*   Updated: 2020/02/27 12:16:58 by cboville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	char n;

	n = '9';
	while (n >= '0')
	{
		write(1, &n, 1);
		n--;
	}
	write(1, "\n", 1);
}
