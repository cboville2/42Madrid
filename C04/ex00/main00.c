/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboville <cboville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 13:31:37 by cboville          #+#    #+#             */
/*   Updated: 2020/02/18 13:33:50 by cboville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str);

int main(void)
{
	char *str;

	str = "0123456789";
	ft_strlen(str);
	printf("%d", ft_strlen(str));
}
