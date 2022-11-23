#include <stdio.h>
#include <stdlib.h>

void numero(float num){
	if (num < 0){
		printf("-1 \n");
	}else if(num > 0){
		printf("1 \n");
	}else
		printf("1 \n");
		
}

int main(){
    float num;

    printf("insira numero: \n");
    scanf("%f",&num);
    numero(num);

    system("pause");
    return 0;
}
