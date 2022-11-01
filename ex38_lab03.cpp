#include <stdio.h>
#include <stdlib.h>

int main() {
	
    int Dia, Mes, Ano;
    const int AnoAtual = 2022;

    printf("Digite o dia, o mes e o Ano, respectivamente:... \n ");
    scanf("%d %d %d", &Dia, &Mes, &Ano);

    if ((Ano > AnoAtual) || (Mes < 1 || Mes > 12) || (Dia < 1 || Dia > 31)) {
        printf("Data invalida. \n");    
    } 
    
	else if (Mes == 4 || Mes == 6 || Mes == 9 || Mes == 11) {
        if (Dia > 30) {
            printf("Data invalida. \n");
        } 
		else {
            printf("Data valida. \n");
        }
    } 
	else if (Mes == 2) {
        if (Ano % 4 == 0 && Ano % 100 != 0 || Ano % 400 == 0) {
            if (Dia > 29) {
                printf("Data invalida. \n");
            } 
			else {
                printf("Data valida. \n");
            }
        } 
		else {
            if (Dia > 28) {
                printf("Data invalida. \n");
            } 
			else {
                printf("Data valida. \n");
            }
        }
    } 
	else {
        printf("Data valida.\n");
    }
	
	system ("pause");
    return 0;
}