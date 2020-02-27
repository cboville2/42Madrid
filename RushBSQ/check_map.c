/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalindo <sgalindo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 12:55:35 by sgalindo          #+#    #+#             */
/*   Updated: 2020/02/26 21:19:45 by sgalindo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "F_header.h"
#include "L_header.h"

int	ft_strlen_mod(char *buff)
{
	int i;
	
	i = 0;
	while (buff[i])
	{
		if (i > 4)
			return(0);
		i++;
		if (buff[i] == '\n')
		
			return (i + 1);
	}
	return (i);
	
}
	
