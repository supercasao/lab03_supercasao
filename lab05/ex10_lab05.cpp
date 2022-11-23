#include <stdio.h>
#include <stdlib.h>

void maior(float num, float num2){
	if(num>num2){
		printf("O maior numero eh: %.2f \n",num);
	}else if(num2>num){
		printf("O maior numero eh: %.2f \n",num2);
	}else
		printf("Os numeros sao iguais");
}

int main(){
    float num, num2;
    
    printf("insira os numeros. \n");
    scanf("%f %f",&num, &num2);
    
	maior(num,num2);
	
    system("pause");
    return 0;
}
