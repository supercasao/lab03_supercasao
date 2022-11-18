#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int x, y, z, soma;
	
	printf("digite tres valores inteiros \n");
	scanf("%d %d %d", &x, &y, &z);
	
	soma = x + y + z;
	
	printf("soma =  %d \n", soma);
	
	system("pause");
	return 0;
}