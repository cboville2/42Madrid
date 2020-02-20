/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main10.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboville <cboville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 13:46:19 by cboville          #+#    #+#             */
/*   Updated: 2020/02/19 21:16:40 by cboville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned  int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main()
{
	char dest[] = "ABCD";
	char src[] = "123456";
	unsigned int size = 4;
	
	
	printf("%u", ft_strlcpy(dest, src, size));
	printf("\n%lu", strlcpy(dest, src, size));
	
}
