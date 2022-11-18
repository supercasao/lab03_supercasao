#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int contador, contador2, x = 0;
    float z = 2;

    for (contador = 3; contador <= 2000000; contador += 2) {
        x = 2;
        for (contador2 = 3; contador2 <= sqrt(contador); contador2 += 2) {
            if (contador % contador2 == 0) {
                x = x + 2;
                break;
            }
        }
        if (x == 2) {
            z = z + contador;
        }
    }
    printf("Soma dos numeros primos ate 2 milhoes: %.0f\n", z);
    
	system("pause");
    return 0;
}