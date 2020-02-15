/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main10.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboville <cboville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 13:46:19 by cboville          #+#    #+#             */
/*   Updated: 2020/02/15 12:51:13 by cboville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlcpy(char *dest, char *src, unsigned int size);

int	main()
{
	char dest[] = "ABCDE";
	char src[] = "123";
	unsigned int size = 3;

	printf("%s", ft_strlcpy(dest, src, size));
}
