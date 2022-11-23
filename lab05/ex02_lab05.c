#include <stdio.h>
#include <stdlib.h>

void Data(int dia, int mes, int ano){
	const char* meses[] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

	printf("A data eh: %i de %s de %i\n", dia, meses[mes - 1], ano);
}

int main(){
    int dia, ano;
    char mes;

    printf("insira o dia, mes e ano: \n");
    scanf("%d %d %d", &dia, &mes, &ano);
    Data(dia, mes, ano);

    system("pause");
    return 0;
}
