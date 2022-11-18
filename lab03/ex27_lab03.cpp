#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int IdadeNarrador;
	
	printf("digite a idade do narrador: \n");
    scanf(" %d",&IdadeNarrador);
    
	if (IdadeNarrador >= 5 && IdadeNarrador <= 7){
		printf("Infantil A \n");
	}
	else if (IdadeNarrador >= 8 && IdadeNarrador <= 10){
		printf("Infantil B \n");
	}
	else if (IdadeNarrador >= 11 && IdadeNarrador <= 13){
		printf("Juvenil B \n");
	}
	else if (IdadeNarrador >= 14 && IdadeNarrador <= 17){
		printf("Junenil B \n");
	}
	else if (IdadeNarrador >= 18 ){
		printf("Adulto \n");
	}
	else{
		printf("Idade Invalida. \n");
	}

	system ("pause");
    return 0;
}