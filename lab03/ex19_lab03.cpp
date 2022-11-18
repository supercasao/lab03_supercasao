#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int Numero;
	
	printf("digite um numero: \n");
    scanf("%d",&Numero);
    
    if(Numero%3 == 0 && Numero%5 == 0){
    	printf("numero invalido, eh divisivel por 3 e 5 ao mesmo tempo \n");
	}
	else if(Numero%3 == 0){
    	printf("numero valido, eh divisivel por 3. \n");
	}
	else if(Numero%5 == 0){
    	printf("numero valido, eh divisivel por 5. \n");
	}
	else{
		printf("numero invalido, nao eh divisivel por 3 e nem por 5 \n");
	}
	
    system ("pause");
    return 0;
}