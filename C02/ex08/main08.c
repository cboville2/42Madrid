/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main08.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboville <cboville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 00:42:25 by cboville          #+#    #+#             */
/*   Updated: 2020/02/15 01:51:01 by cboville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_strlowcase(char *str);

int	main(void)
{
	char str[] = "ABC";

	ft_strlowcase(str);
	printf("%s", ft_strlowcase(str));
}