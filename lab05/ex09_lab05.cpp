#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void VolumeCilindro(float altura, float raio){
	printf("O volume do cilindro eh: %.2f \n", 3.14159*pow(raio,2)*altura);
}

int main(){
    float altura, raio;
    
    printf("insira a altura e raio do cilindro. \n");
    scanf("%f %f",&altura, &raio);
    
	VolumeCilindro(altura,raio);
	
    system("pause");
    return 0;
}
