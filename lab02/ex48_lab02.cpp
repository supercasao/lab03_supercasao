#include <stdio.h>
#include <stdlib.h>

int main() {
	
    int segundos, h, m, s, resto;

    printf("Digite uma quantidade de segundos: ");
    scanf("%d", &segundos);
    
    h = segundos / 3600;
    resto = segundos % 3600;
    m = resto / 60;
    s = resto % 60;
    
    printf("horas: %d, minutos: %d, segundos:%d\n", h, m, s);

    system("pause");
	return 0;
}