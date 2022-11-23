#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void VolumeEsfera(float raio){
	printf("O volume da esfera eh: %.2f", (4/3)*3.1415*pow(raio,3));
}

int main(){
    float raio, pi, volume;
    
    printf("insira o raio da esfera. \n");
    scanf("%f", &raio);
    
	VolumeEsfera(raio);
	
    system("pause");
    return 0;
}
