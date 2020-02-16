/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ultimo.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnieto-r <dnieto-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 20:12:19 by dnieto-r          #+#    #+#             */
/*   Updated: 2020/02/16 20:16:02 by dnieto-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ponerultimo(int matriz[4][4], int coords[7], int numero)
{
    int cont;
    int acumuladori;
    int acumuladorj;
    
    
    acumuladori = 0;
    acumuladorj = 0;
    cont = 0;
    while (cont < 6)
    {
        if (cont % 2 == 0)
            acumuladori =  acumuladori + coords[cont];
        cont++;
    }

    cont = 0;
    while (cont < 6)
    {
        if (cont % 2 != 0)
        {
            acumuladorj =  acumuladorj + coords[cont];
        }
        cont++;
    }
    matriz[6-acumuladori][6-acumuladorj] = numero;
}

void    ultimo(int matriz[4][4], int numero)
{
    int contador;
    int i;
    int j;
    int z;
    int coords[7];
    
    contador = 0;
    i = 0;
    z = 0;
    while (i < 4)
    {
        j = 0;
        while (j < 4)
        {
            if (matriz[i][j] == numero)
            {
                contador++;
                coords[z] = i;
                coords[z+1] = j;
                z = z + 2;
            }
            j++;
        }
        i++;
    }

    if (contador == 3)
    { 
        ponerultimo(matriz, coords, numero);
    }
}