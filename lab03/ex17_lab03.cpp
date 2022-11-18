#include <stdio.h>
#include <stdlib.h>

int main (){
	
	float BaseMaior, BaseMenor, Altura, AreaTrapezio;
	
	printf("digite a base maior, base menor e a altura. \n");
    scanf(" %f %f %f",&BaseMaior, &BaseMenor, &Altura);

	AreaTrapezio = ((BaseMaior + BaseMenor)*Altura)/2;

    if(BaseMaior > 0 && BaseMenor > 0 && Altura > 0){
        printf("a area da figura eh: %.2f  \n", AreaTrapezio);
	}
	else{
        printf("area invalida, verifique as medidas");
    }

    system ("pause");
    return 0;
}