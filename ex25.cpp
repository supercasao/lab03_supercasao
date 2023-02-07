#include <stdio.h>
#include <stdlib.h>

void lerNotas(float *n1, float *n2){
  	float nota1, nota2;
  	
  	printf("Digite a primeira nota: ");
  	scanf("%f", &nota1);

  	printf("Digite a segunda nota: ");
  	scanf("%f", &nota2);

  	*n1 = nota1;
  	*n2 = nota2;
}

float mediaS(float n1, float n2){
  	return (n1 + n2) / 2;
}

float mediaP(float n1, float n2){
  	return (n1 + n2 * 2) / 3;
}

int main(){
    float n1, n2;

  	lerNotas(&n1, &n2);
  	
  	printf("Media simples: %f\n", mediaS(n1, n2));
  	
  	printf("Media ponderada: %f\n", mediaP(n1, n2));
  	
  	system("pause");
    return 0;
}
