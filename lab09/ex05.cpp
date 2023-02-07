#include <stdio.h>
#include <stdlib.h>

void maior(int *n1, int *n2){
   int valor = *n1;

    if(*n1 < *n2){
        *n1 = *n2;
        *n2 = valor;
    }
}

int main(){
    int n1, n2;
    
    printf("Digite o primeiro valor: ");
    scanf("%d", &n1);,
    
    printf("Digite o segundo valor: ");
    scanf("%d", &n2);
    
    maior(&n1, &n2);
    
    printf("Maior valor: %d\nMenor valor: %d", n1, n2);
    
	system("pause");
    return 0;
}
