#include <stdio.h>
#include <stdlib.h>

void soma(int *a, int *b){
  *a += *b;
}

int main(){
    int a, b;
    
  	printf("Digite o numero A: ");
 	scanf("%d", &a);
 	
  	printf("Digite o numero B: ");
  	scanf("%d", &b);

  	soma(&a, &b);

  	printf("A soma entre A e B foi: %d", a);
    
	system("pause");
    return 0;
}
