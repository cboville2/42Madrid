#include <unistd.h>
#include <stdio.h>

void imprimircasillas(int matriz[4][4]);
int poneriniciales(int x, int matriz[4][4], char bordes[16]);
void    ultimo(int matriz[4][4], int numero);
void    vert(int matriz[4][4], int i, int j);
int posibilidad(int matriz[4][4], int *numeros, int i, int j, char bordes[16]);

void separar(char* parametros, char* separacion)
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
}

int	main(int argc, char *argv[])
{
	int i;
    int x;
    int y;
	char numero;
	int matriz[4][4] = {0};
	char bordes[16];
    int contador;
    int suma;
    int casosposibles;

	separar(argv[1], bordes);	
    

    i = 0;

	while(i <= 15)
    {
        poneriniciales(i, matriz, bordes);
		i++;
	}


    suma = 0;
    x = 0;
    while (x < 4)
    { 
        y = 0;
        while (y < 4)
        {
            vert(matriz, x, y);
            y++;
        }
        x++;   
        y = 0;
    }

    contador = 1;
   

    while (suma < 40 && casosposibles > 0)
    {
        x= 0;
        while (x < 4)
        {
            y = 0;
            while (y < 4)
            { 
                if (matriz[x][y] == 0 || matriz[x][y] == 6)
                { 
                    recorrido(x, y, matriz, bordes);
                }
                y++;
                suma = hacersuma(suma, matriz);
            }
            x++;       
        }
        casosposibles--;
    }
    
    if (casosposibles == 0)
    {
        write(1, "Error\n", 7);
        imprimircasillas(matriz);
    }
    else
        imprimircasillas(matriz);
}

