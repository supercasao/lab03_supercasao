#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float nota1, nota2, nota3, nota4, MediaAritimetica;
	
	printf("digite as quatro notas: \n");
	scanf("%f \n %f \n %f \n %f", &nota1, &nota2, &nota3, &nota4);
	
	MediaAritimetica =(nota1 + nota2 + nota3 + nota4)/4;
	
	printf("a media dessas 4 notas eh: %.2lf", MediaAritimetica);
	
	system("pause");
	return 0;
}