#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float Altura, Peso;
	
	printf("Insira sua altura (metros) e peso(kg)) respectivamente:... \n");
	scanf(" %f %f", &Altura, &Peso);
	
	if (Altura <= 1.20){
		if(Peso < 60){
			printf("Classificacao: A \n");
		}
		else if(Peso >= 60 && Peso <= 90){
			printf("Classificacao: D \n");
		}
		else if(Peso > 90){
			printf("Classificacao: G \n");
		}
	}
	else if(Altura >= 1.20 && Altura <= 1.70){
		if(Peso < 60){
			printf("Classificacao: B \n");
		}
		else if(Peso >= 60 && Peso <= 90){
			printf("Classificacao: E \n");
		}
		else if(Peso > 90){
			printf("Classificacao: H \n");
		}
	}
	else if (Altura >= 1.20){
		if(Peso < 60){
			printf("Classificacao: C \n");
		}
		else if(Peso >= 60 && Peso <= 90){
			printf("Classificacao: F \n");
		}
		else if(Peso > 90){
			printf("Classificacao: I \n");
		}
	}

	system("pause");
	return 0; 
}