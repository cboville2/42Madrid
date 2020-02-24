/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   otros.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnieto-r <dnieto-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 21:56:51 by dnieto-r          #+#    #+#             */
/*   Updated: 2020/02/16 23:35:39 by dnieto-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    vertx(int matriz[4][4], int i, int j, int seis, int cuatro)
{
    int y;

    y = 0;
    while (y < 4)
    { 
        if (matriz[i][y] == 6 && y != j)
            seis++;
        if (matriz[i][y] == 4 && y != j)
            cuatro++;
        y++;
    }
    if (seis == 2 && cuatro > 0)
        matriz[i][j] = 3;
    y = 0;
    cuatro = 0;
    seis = 0;
    while (y < 4)
    { 
        if (matriz[y][j] == 6 && y != i)
            seis++;
        if (matriz[y][j] == 4 && y != i)
            cuatro++;
        y++;
    }
    if (seis == 2 && cuatro > 0)
        matriz[i][j] = 3;
}

void    vert(int matriz[4][4])
{
    int seis;
    int cuatro;
    int x;
    int y;

    y = 0;
    seis = 0;
    cuatro = 0;

    x = 0;
    while (x < 4)
    { 
        y = 0;
        while (y < 4)
        {
            vertx(matriz, x, y, seis, cuatro);
            y++;
        }
        x++;   
        y = 0;
    }
}

void    ponert(char bordes[16], int matriz[4][4])
{
    int i;
    int j;

    i = 0;
    while (i < 4)
    {
        j = 0;
        while (j < 4)
        {
            if (j == 0 || j == 3 || i == 0 || i == 3)
            {
                if ((i == 0 && bordes[j] == '3')
                || (i == 3 && bordes[j + 4] == '3') 
                || (j == 0 && bordes[i + 8] == '3') 
                || (j == 3 && bordes[i + 12] == '3'))
                {
                    matriz[i][j] = 6;
                }
            }
            j++; 
        }
        i++;
    }
}
