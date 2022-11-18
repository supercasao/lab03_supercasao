#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float Notas;
	int Faltas;
	
	printf("Insira a nota e a quantidade de faltas, respectivamente:... \n");
	scanf(" %f %d", &Notas, &Faltas);
	
	if(9.00 <= Notas && Notas <= 10.00){
		if(Faltas < 20){
			printf("Classificacao: A \n");
		}
		else{
			printf("Classificacao: B \n");
		}
	}
	else if(7.50 <= Notas && Notas < 8.99){
		if(Faltas < 20){
			printf("Classificacao: B \n");
		}
		else{
			printf("Classificacao: C \n");
		}
	}
	else if (5.00 <= Notas && Notas <= 7.49){
		if(Faltas < 20){
			printf("Classificacao: C \n");
		}
		else{
			printf("Classificacao: D \n");
		}	
	}
	else if (4.00 <= Notas && Notas <= 4.99){
		if(Faltas < 20){
			printf("Classificacao: D \n");
		}
		else{
			printf("Classificacao: E \n");
		}	
	}
	else if (0.00 <= Notas && Notas <= 3.99){
		if(Faltas < 20){
			printf("Classificacao: E \n");
		}
		else{
			printf("Classificacao: E \n");
		}	
	}
	else{
		printf("numeros invalidos");
	}

	system("pause");
	return 0; 
}