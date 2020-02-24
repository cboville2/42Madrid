/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboville <cboville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 12:55:35 by sgalindo          #+#    #+#             */
/*   Updated: 2020/02/24 20:47:43 by cboville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*read_map(char *example_file);

int	ft_strlen_mod(char *buff)
{
	int i;
	
	i = 0;
	while (buff[i])
	{
		if (i > 16) //4 bytes * 4 caracteres
			return(0);
		i++;
		if (buff[i] == '\n')
		
			return (i + 1);
			printf("%d", i);
	}
	return (i);
	
}
	




	// while (str[i + 5] != '\0')
	// {
	// 	i++;
	// 	len = i;
	// }
	// 	printf("%d", len);
	// 	return (i);
	
	// return(*str);
	
