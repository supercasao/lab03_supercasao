#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int raizes(float A, float B, float C, float *X1, float *X2){
  	float d = B * B - 4 * A * C;

  	if (d < 0){
    	return 0;
  	}else if (d == 0){
    	*X1 = -B / (2 * A);
    	return 1;
  	}else{
    	*X1 = (-B + sqrt(d)) / (2 * A);
    	*X2 = (-B - sqrt(d)) / (2 * A);
    	return 2;
  	}
}

int main(){
    float A, B, C, X1, X2;
  	int raizesR;

  	printf("Digite os coeficientes A, B e C da equação Ax² + Bx + C = 0: ");
  	scanf("%f %f %f", &A, &B, &C);

  	raizesR = raizes(A, B, C, &X1, &X2);

  	if (raizesR == 0){
    	printf("Não existem raízes reais.\n");
  	}else if (raizesR == 1){
    	printf("Existe uma raiz real: %f\n", X1);
  	}else{
    	printf("Existem duas raízes reais: %f e %f\n", X1, X2);
  	}
  	
  	system("pause");
    return 0;
}
