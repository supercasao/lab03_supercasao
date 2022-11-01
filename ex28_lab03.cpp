#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	
	float Numero1, Numero2, Numero3;
	float Geometrica, Ponderada, Harmonica, Aritmetica;
	int OpcaoCalculo;
	
	printf("digite 3 numeros: \n");
    scanf(" %f %f %f",&Numero1, &Numero2, &Numero3);
    
    Geometrica = pow(Numero1*Numero2*Numero3, 3);
	Ponderada = ((1*Numero1)+(2*Numero2)+(3*Numero3))/6;
	Harmonica = 1/((1/Numero1)+(1/Numero2)+(1/Numero3));
	Aritmetica = (Numero1 + Numero2 + Numero3)/3;
	
	printf("digite a opcao de calculos\n (1)Geometrica \n (2)Ponderada \n (3)Harmonica \n (4)Aritmetica \n");
	scanf(" %d",OpcaoCalculo);
	
	switch (OpcaoCalculo){
    case 1:
    printf("Media Geometrica: %.2f \n", Geometrica);
    break;
    
    case 2:
    printf("Media Ponderada: %.2f \n", Ponderada);
    break;
    
    case 3:
    printf("Media Harmonica: %.2f \n", Harmonica);
    break;
    
    case 4:
    printf("Media Aritmetica: %.2f \n", Aritmetica);
    break;
    
    default:
    printf("Valor invalido!\n");
	}

	system ("pause");
    return 0;
}