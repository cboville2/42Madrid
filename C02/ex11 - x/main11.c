/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main11.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboville <cboville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 00:42:25 by cboville          #+#    #+#             */
/*   Updated: 2020/02/17 13:32:53 by cboville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_putstr_non_printable(char *str);

int	main(void)
{
	char str[] = "Coucou\ntu vas bien ?";

	ft_putstr_non_printable(str);
	printf("%c", ft_putstr_non_printable(str));
}
