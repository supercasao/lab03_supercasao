#include <stdio.h>
#include <stdlib.h>

int main (){
	
	float Lado1, Lado2, Lado3;
	
	printf("digite os lados do triangulo: \n");
    scanf(" %f %f %f",&Lado1, &Lado2, &Lado3);
    
    if(Lado1 > Lado2 + Lado3 || Lado2 > Lado1 + Lado3 || Lado3 > Lado1 + Lado2){
    	printf("nao pode ser um triangulo \n");
	}
	else{
		printf("As medidas dos lados formam um triangulo \n");
			if(Lado1 == Lado2 && Lado1 == Lado3 && Lado2 == Lado3)
				printf("triangulo equilatero \n");
			else if(Lado1 != Lado2 && Lado1 != Lado3 && Lado2 != Lado3)
				printf("triangulo escaleno \n");
			else
				printf("triangulo isoceles");			
	}
	
    system ("pause");
    return 0;
}