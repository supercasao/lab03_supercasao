#include <stdio.h>
#include <stdlib.h>

void multiplica(int *a, int *b, int *c, int *d){
  	*b = *a*2;
  	*c = *b*2;
  	*d = *c*2;
}

int main(){
    int a, b, c, d;

  	printf("Digite o vaor de A: ");
  	scanf("%d", &a);

  	multiplica(&a, &b, &c, &d);

  	printf("A: %d\nB: %d\nC: %d\nD: %d\n", a, b, c, d);
  	
  	system("pause");
    return 0;
}
