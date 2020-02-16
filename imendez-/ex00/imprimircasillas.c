#include <unistd.h>

void imprimircasillas(int matriz[4][4]){
	int i;
 	int j;
    char numero;

    i = 0;
    j = 0;
    while(i < 4){
		while (j < 4){
            numero = matriz[i][j] + '0';
            write(1, &numero, 1);
            write(1, " ", 1);
            j++;
        }
        write(1, "\n", 1);
		i++;
        j = 0; 
    }
}


