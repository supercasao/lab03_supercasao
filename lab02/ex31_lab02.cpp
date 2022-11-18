#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int x;
	
	printf("digite o valor desejado:...");
	scanf("%d", &x);
	printf(" o antecessor dele eh: %d \n e seu sucessor eh  %d \n", x - 1, x + 1);
	
	system("pause");
	return 0;
}