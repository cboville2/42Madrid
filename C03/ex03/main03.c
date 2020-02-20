/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboville <cboville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 01:33:49 by cboville          #+#    #+#             */
/*   Updated: 2020/02/18 03:10:05 by cboville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main()
{
	char dest[20] = "1234";
	char src[5] = "5678";
	int nb;
	
	nb = 3;

	printf("%s", ft_strncat(dest, src, nb));
	printf("\n%s", strncat(dest, src, nb));
}
