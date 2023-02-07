#include <stdio.h>
#include <stdlib.h>

int main(){

	int n1,*n1ponteiro;
    float n2,*n2ponteiro;
    char n3,*n3ponteiro;

    n1ponteiro = &n1;
    n2ponteiro = &n2;
    n3ponteiro = &n3;

    printf("Digite o valor de n1ponteiro: ");
    scanf("%d", n1ponteiro);
    
    printf("Digite o valor de n2ponteiro: ");
    scanf("%f", n2ponteiro);
    
    printf("Digite o valor de n2ponteiro: ");
    scanf(" %c", n3ponteiro);

    printf("Os valores ficam: \nn1 = %d\nn2 = %f\nn3 = %c\n", n1, n2, n3);
    
    system("pause");
    return 0;
}

