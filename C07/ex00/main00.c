/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboville <cboville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 00:52:48 by cboville          #+#    #+#             */
/*   Updated: 2020/02/24 01:44:34 by cboville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>


char	*ft_strdup(char *src);

int	main()
{
	printf("%s", ft_strdup("hola"));
	printf("\n");
	printf("%s", strdup("hola"));
}