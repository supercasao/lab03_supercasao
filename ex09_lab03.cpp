#include <stdio.h>
#include <stdlib.h>

int main (){

    float ParcelaEmprestimo, ValorSalario;

    printf("digite o salario e a parcela do emprestimo: ");
    scanf("%f %f", &ValorSalario, &ParcelaEmprestimo);

    if (ParcelaEmprestimo < 0.2 * ValorSalario){
        printf ("Emprestimo concedido \n");
    }
    else{
        printf("Emprestimo nao concedido \n");
    }

    system ("pause");
    return 0;
}