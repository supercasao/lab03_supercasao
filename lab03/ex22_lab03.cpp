#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int Idade, TempoTrabalho;
	
	printf("digite a idade e tempo de trabalho: \n");
    scanf(" %d %d",&Idade, &TempoTrabalho);

	if((Idade >= 65 || TempoTrabalho >= 30) || (Idade >= 60 && TempoTrabalho >= 25)){
		printf("Pode aposentar. \n");
	}
	else{
		printf("Nao pode aposentar. \n");
	}

	system ("pause");
    return 0;
}