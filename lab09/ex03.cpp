#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1, n2, *pontn1, *pontn2;
    
    pontn1 = &n1;
    pontn2 = &n2;

    printf("Digite o primeiro valor: ");
    scanf("%d", pontn1);
    
    printf("Digite o segundo valor: ");
    scanf("%d", pontn2);

    if (n1 > n2){
        printf("O maior valor eh: %d\nO menor valor eh: %d", n1, n2);
    }
    else{
        printf("O maior valor eh: %d\nO menor valor eh: %d", n2, n1);
    }
    
	system("pause");
    return 0;
}
