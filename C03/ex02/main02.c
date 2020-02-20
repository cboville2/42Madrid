/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboville <cboville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 22:50:13 by cboville          #+#    #+#             */
/*   Updated: 2020/02/18 05:58:56 by cboville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main()
{
	char dest[20] = "1234";
	char src[10] = "5678";

	printf("%s", ft_strcat(dest, src));
	printf("\n%s", strcat(dest, src));
}