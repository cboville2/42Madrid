/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboville <cboville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 05:36:02 by cboville          #+#    #+#             */
/*   Updated: 2020/02/18 06:10:50 by cboville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
	char dest[20] = "1234";
	char src[5] = "5678";
	int size;
	
	size = 10;

	printf("%u", ft_strlcat(dest, src, size));
	printf("\n%lu", strlcat(dest, src, size));
}
