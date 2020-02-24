/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnieto-r <dnieto-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 21:49:32 by dnieto-r          #+#    #+#             */
/*   Updated: 2020/02/16 23:40:59 by dnieto-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    imprimircasillas(int matriz[4][4]);
int     poneriniciales(int x, int matriz[4][4], char bordes[16]);
void    ultimo(int matriz[4][4], int numero);
void    vert(int matriz[4][4]);
int     ejecutarrecorrido(int matriz[4][4], char bordes[16], int x);
void    ejecutarultimo(int matriz[4][4]);

int separar(char* parametros, char* separacion)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (parametros[i] != '\0')
	{
		if (i % 2 == 0)
		{
			separacion[j] = parametros[i];
			j++;
		}
		i++;
	}
    if ((j < 16 || j > 16) || (i < 31 || i > 31))
    {
        return (0);
    }
    return (1);
}



int	main(int argc, char *argv[])
{
    (void) argc;
    int i;
    int matriz[4][4] = {0};
    char bordes[16];
    int empezar;


	empezar = separar(argv[1], bordes);	
    if (empezar == 1)
    {
        i = 0;
        while(i <= 15)
        {
            poneriniciales(i, matriz, bordes);
            i++;
        }
        vert(matriz);
        ejecutarultimo(matriz);
        i = ejecutarrecorrido(matriz, bordes, i);
        if (i == 0)
            write(1, "Error, me he quedado en:\n", 25);
        imprimircasillas(matriz);
        return (0);
    } else 
        write(1, "Pon 15 numeros", 14);
}

