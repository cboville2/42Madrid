/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gestion.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnieto-r <dnieto-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 20:07:15 by dnieto-r          #+#    #+#             */
/*   Updated: 2020/02/16 23:35:03 by dnieto-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     hacersuma(int suma, int matriz[4][4]);

void    posibilidad(int matriz[4][4], int *numeros, int i, int j, char bordes[16])
{
    int cont;
    int uno;
    int dos;
    int tres;
    int cuatro;

    uno = 0;
    dos = 0;
    tres = 0;
    cuatro = 0;
    cont = 0;
    while (cont< 6)
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

void    vernumeros(int numeros[5], int matriz[4][4], int i, int j)
{
    int cont;
    int x;
    int y;
    
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
}

void    recorrido(int i, int j, int matriz[4][4], char bordes[16])
{
    int cont;
    int numeros[5];

    cont = 0;
    while (cont < 5)
    { 
        numeros[cont] = 0;
        cont++;
    }

    vernumeros(numeros, matriz, i, j);
    posibilidad(matriz, numeros, i, j, bordes);
}

int    ejecutarrecorrido(int matriz[4][4], char bordes[16], int x)
{
    int contador;
    int suma;  
    int casosposibles;
    int y;

    suma = 0;
    contador = 1;
    casosposibles = 100;
    while (suma < 40 && --casosposibles > 0)
    {
        x = 0;
        while (x < 4)
        {
            y = 0;
            while (y < 4)
            { 
                if (matriz[x][y] == 0 || matriz[x][y] == 6)
                    recorrido(x, y, matriz, bordes);
                y++;
                suma = hacersuma(suma, matriz);
            }
            x++;       
        }
    }
    return (casosposibles);
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
