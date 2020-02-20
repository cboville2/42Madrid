/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboville <cboville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 01:40:18 by cboville          #+#    #+#             */
/*   Updated: 2020/02/18 05:22:25 by cboville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main()
{
	char str[] = "hola que tal estas";
	char to_find[] = "que";

	printf("%s", ft_strstr(str, to_find));
	printf("\n %s", strstr(str, to_find));

}