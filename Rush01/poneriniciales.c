/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   poneriniciales.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnieto-r <dnieto-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 22:44:45 by dnieto-r          #+#    #+#             */
/*   Updated: 2020/02/16 22:46:01 by dnieto-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ponert(char bordes[16], int matriz[4][4]);

void    ponerunos(int x, int matriz[4][4]){
	if(x <= 3)
		matriz[0][x] = 4;
	else if(x <= 7)
		matriz[3][x-4] = 4;
	else if(x <= 11)
		matriz[x-8][0] = 4;
	else if(x <= 15){
        matriz[x-12][3] = 4;
	}
}

void    ponercuatros(int x, int matriz[4][4])
{
    int cont;
    int inverso;

    cont = -1;
    inverso = 1;
    if(x <= 3)
        while(++cont < 4)
            matriz[cont][x] = cont + 1;
    else if(x <= 7)
    {
        cont = 3;
        while(cont >= 0)
            matriz[cont--][x-4] = inverso++;
    }
    else if(x <= 11)
        while(++cont < 4)
            matriz[x-8][cont] = inverso++;
    else if(x <= 15)
    {
        cont = 3;
        while(cont >= 0)
            matriz[x-12][cont--] = inverso++;
    }
}

void    ponerdostres(int x, int matriz[4][4], int primerodos)
{
    if (primerodos)
    {
        if(x < 4)
            matriz[1][x] = 4;
        else if(x <= 7)
            matriz[2][x-4] = 4;
        else if(x <= 11)
            matriz[x-8][1] = 4;
        else if(x <= 15)
            matriz[x-12][2] = 4;
    }
    else
    {
        if(x < 4)
            matriz[2][x] = 4;
        else if(x <= 7)
            matriz[1][x-4] = 4;
        else if(x <= 11)
            matriz[x-8][2] = 4;
        else if(x <= 15)
            matriz[x-12][1] = 4;
    }
}

void    ponerunodos(int x, int matriz[4][4], int primerouno)
{
    if (primerouno)
    {
        if(x < 4)
            matriz[3][x] = 3;
        else if(x <= 7)
            matriz[0][x-4] = 3;
        else if(x <= 11)
            matriz[x-8][3] = 3;
        else if(x <= 15)
            matriz[x-12][0] = 3;
    }
    else
    {
        if(x < 4)
            matriz[0][x] = 3;
        else if(x <= 7)
            matriz[3][x-4] = 3;
        else if(x <= 11)
            matriz[x-8][0] = 3;
        else if(x <= 15)
            matriz[x-12][3] = 3;
    }
}

void    poneriniciales(int x, int matriz[4][4], char bordes[16])
{
    ponert(bordes, matriz);
    if (bordes[x] == '1')
		ponerunos(x, matriz);
	else if (bordes[x] == '4')
	 	ponercuatros(x, matriz);
    else if ((x < 4 || (x > 8 && x < 12))
           && (bordes[x] == '2' && bordes[x+4] == '3'))
        ponerdostres(x, matriz, 1);
    else if ((x < 4 || (x > 8 && x < 12))
           && (bordes[x] == '3' && bordes[x+4] == '2'))
        ponerdostres(x, matriz, 0);
    else if ((x < 4 || (x > 8 && x < 12))
           && (bordes[x] == '2' && bordes[x+4] == '1'))
        ponerunodos(x, matriz, 0);
    else if ((x < 4 || (x > 8 && x < 12))
           && (bordes[x] == '1' && bordes[x+4] == '2'))
        ponerunodos(x, matriz, 1);
}
