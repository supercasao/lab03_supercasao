#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void QuadradoPerfeito(int num, int raiz){
	if(num < 0){
		printf("numero invalido \n");
	}else if(num > 0){
		int raiz = sqrt(num);
		if (num/raiz == raiz){
			printf("esse numero eh um quadrado perfeito de: %d \n", raiz);
		}else
			printf("nao eh quadrado perfeito \n");
	}		
}

int main(){
    int num, raiz;

    printf("insira numero: \n");
    scanf("%d",&num);
    QuadradoPerfeito(num,raiz);

    system("pause");
    return 0;
}
