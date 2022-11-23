#include <stdio.h>
#include <stdlib.h>

void TempoEmSegundos(int dia, int horas, int segundos){
	printf("O tempo determinado em segundos eh: %d", (dia*86400) + (horas*3600) + (segundos));
}

int main(){
    int dias, horas, segundos;
    
    printf("insira os dias, horas e segundos. \n");
    scanf("%d %d %d", &dias, &horas, &segundos);
    
	TempoEmSegundos(dias,horas,segundos);
	
    system("pause");
    return 0;
}
