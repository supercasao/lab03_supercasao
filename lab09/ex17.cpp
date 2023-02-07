#include <stdio.h>
#include <stdlib.h>

void separaNum(float *num){
  	int numInt;
  	numInt = (int)(*num);

  	printf("Numero %f:\nParte Inteira: %d\nParte fracionaria: %f", *num, numInt, (*num - numInt));
}

int main(){
    float num;
    
  	printf("Digite um numero real: ");
  	scanf("%f", &num);

  	separaNum(&num);
  	
  	system("pause");
    return 0;
}
