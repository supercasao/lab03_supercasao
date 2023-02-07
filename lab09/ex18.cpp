#include <stdio.h>
#include <stdlib.h>

void calculaEsfera(float r, float *a, float *v){
  	*a = 4 * 3.1415 * (r * r);
  	*v = 4.0/3.0 * 3.1415 * (r * r * r);
}

int main(){
    float r, a, v;

  	printf("Digite o raio da esfera: ");
  	scanf("%f", &r);

  	calculaEsfera(r, &a, &v);
  	
  	printf("Sobra a Esfera:\nArea de superficie: %f\nVolume: %f\n", a, v);
  	
  	system("pause");
    return 0;
}
