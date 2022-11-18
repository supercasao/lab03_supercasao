#include <stdio.h>
#include <stdlib.h>

int main (){
	
	float PrecoProduto;
	int Estado;
	
	printf("insira o preco do produto: \n");
	scanf("%f", &PrecoProduto);
	
	printf("insira o estado: \n (1)MG \n (2)SP \n (3)RJ \n (4)MS \n");
	scanf("%d", &Estado);
	
	switch (Estado){
		case 1:
		printf("Em MG o produto custa: %.2f \n", PrecoProduto * 1.07);
		break;
	    
	    case 2:
	    printf("Em SP o produto custa: %.2f \n", PrecoProduto * 1.12);
	    break;
	    
	    case 3:
	    printf("No RJ o produto custa: %.2f \n", PrecoProduto * 1.15);
	    break;
	    
	    case 4:
	    printf("No MS o produto custa: %.2f \n", PrecoProduto * 1.08);
	    break;
	    
	    default:
	    printf("Estado digitado nao eh valido");
	}
	
	system ("pause");
    return 0;
}