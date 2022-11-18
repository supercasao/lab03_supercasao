#include <stdio.h>
#include <stdlib.h>

int main(){

	int Numero = 0;
	
	while (Numero <= 100000){
		printf(" %d ", Numero);
		Numero += 1000;
	}
	
	system("pause");
	return 0;
}