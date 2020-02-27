/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_str.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgalindo <sgalindo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 01:43:10 by cboville          #+#    #+#             */
/*   Updated: 2020/02/26 21:11:36 by sgalindo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "F_header.h"
#include "L_header.h"

int		ft_strlen(char *buff)
{
	int cont;

	cont = 0;
	while (buff[cont] != '\0')
	{
		cont++;
	}
	return (cont);
}


char *map_str(char *buff, char **mat, int k)
{
	int i;
	int j;

	k = 0;
	i = 0;
	j = 0;
	while (buff[k] != '\n')
		k++;
	k++;
	while(buff[k] != '\0')
	{
		j = 0;
		while (buff[k] != '\n')
		{
			mat[i][j] = buff[k];
			j++;
			k++;
			if(buff[k] == '\0')
				break;
		}	
		k++;
		i++;
	}
	return(*mat);
}


char	map_anal(char *buff, char blank, char obstacle, char turkey)
{
	int i;

	i = 0;
	while(buff[i] >= '0' && buff[i] <= '9')
	{
		i++;
		blank = buff[i + 1];
		obstacle = buff[i + 2];
		turkey = buff[i + 3];
	}
	printf("%c", turkey);
	return(0);
}

char	*mat_num(char **mat, char *buff)
{
	int cont;
	int i;
	int j;

	cont = 0;
	i = 0;
	j = 0;
	while (mat[i][j] != '\0')
	{
		j = 0;
		while (mat[i][j] != '\n')
		{
			if (mat[i][j] == buff[1])
				mat[i][j] = '1';
			else if (mat[i][j] == buff[2])
				mat[i][j] = '0';
			j++;
		}
		i++;
	}
	return(*mat);
}

int		ft_atoi(char *str)
{
	int i;
	int neg;
	int aux;

	aux = 0;
	i = 0;
	neg = 1;
	while (str[i] != '\0' && (str[i] == '\t' || str[i] == '\n'
	|| str[i] == ' ' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r'))
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg = neg * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		aux = aux * 10 + (str[i] - '0');
		i++;
	}
	return (neg * aux);
}

int		sum_mat(int **mat, char *buff)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (mat[i][j] != '\0')
	{
		j = 0;
		while (mat[i][j] != '\n')
		{
			if (mat[i][j] == buff[1])
				mat[i][j] = '1';
			else if (mat[i][j] == buff[2])
				mat[i][j] = '0';
			j++;
		}
		i++;
	}
	return(**mat);
}