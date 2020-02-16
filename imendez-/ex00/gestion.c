/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gestion.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboville <cboville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 20:07:15 by dnieto-r          #+#    #+#             */
/*   Updated: 2020/02/16 20:31:26 by cboville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	vert(int matriz[4][4], int i, int j)
{
	int seis;
	int cuatro;
	int y;

	y = 0;
	seis = 0;
	cuatro = 0;
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

int posibilidad(int matriz[4][4], int *numeros, int i, int j, char bordes[16])
{
    int cont;
    int uno;
    int dos;
    int tres;
    int cuatro;
    int *posib;

    uno = 0;
    dos = 0;
    tres = 0;
    cuatro = 0;
    cont = 0;
    while (cont < 6)
    {
        if (numeros[cont] == 1)
            uno++;
        else if (numeros[cont] == 2)
            dos++;
        else if (numeros[cont] == 3)
            tres++;
        else if (numeros[cont] == 4)
            cuatro++;
        cont++;
    }
    
       if (j == 0 || j == 3 || i == 0 || i == 3)
        if ((i == 0 && bordes[j] == '3')
        || (i == 3 && bordes[j + 4] == '3') 
        || (j == 0 && bordes[i + 8] == '3') 
        || (j == 3 && bordes[i + 12] == '3'))
            tres++;

    if (uno == 0 && (dos > 0 && tres > 0 && cuatro > 0))
        matriz[i][j] = 1;
    else if (dos == 0 && (uno > 0 && tres > 0 && cuatro > 0))
        matriz[i][j] = 2;
    else if (tres == 0 && (dos > 0 && uno > 0 && cuatro > 0))
        matriz[i][j] = 3;
    else if (cuatro == 0 && (dos > 0 && tres > 0 && uno > 0))
        matriz[i][j] = 4;
}

void    recorrido(int i, int j, int matriz[4][4], char bordes[16])
{
    int x;
    int y;
    int cont;
    int numeros[5];

    cont = 0;
    while (cont < 5)
    { 
        numeros[cont] = 0;
        cont++;
    }

    x = 0;
    y = 0;
    cont = 0;
    while (x < 4)
    {
        if (x != i)
        {
            numeros[cont] = matriz[x][j];
            cont++;
        }
        x++;
    }
    while (y < 4)
    {
        if (y != j)
        {
            numeros[cont] = matriz[i][y];
            cont++;
        }
        y++;
    }
     cont = 0;
    
    posibilidad(matriz, numeros, i, j, bordes);
}

int hacersuma(int suma, int matriz[4][4])
{
    int x;
    int y;
    
    suma = 0;
    x = 0;
    while (x < 4)
    { 
        y = 0;
        while (y < 4)
        { 
            if (matriz[x][y] != 6)
            {  
                suma = suma + matriz[x][y];
            }
            y++;
        }
        x++;   
    }
    return suma;
}
