#include <stdio.h>
#include <stdlib.h>

void invertevalor(int *n1, int *n2){
    int x, y;
    
    x = *n1;
    y = *n2;

    *n2 = x;
    *n1 = y;
}

int main(){
    int n1, n2, *pontn1, *pontn2;

    pontn1 = &n1;
    pontn2 = &n2;

    printf("Digite o primeiro valor: ");
    scanf("%d", pontn1);
    
    printf("Digite o segundo valor: ");
    scanf("%d", pontn2);

    invertevalor(pontn1, pontn2);

    printf("Valor n1: %d\nValor n2: %d\n", n1, n2);
    
	system("pause");
    return 0;
}
