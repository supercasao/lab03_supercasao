#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int Dia, Mes, Ano;
	
	printf("Digite a data no padrao dia/mes/ano \n");
	scanf(" %d %d %d", &Dia, &Mes, &Ano);
	
	if ((Ano % 4 == 0 && Ano % 100 != 0) || Ano % 400 == 0 ){
		if((Dia >=1 && Dia<=30) && (Mes >=1 && Mes <=12 && Mes!=2)){
			printf("data valida \n");
		}
		else if ((Dia >=1 && Dia <=29) && (Mes == 2)){
			printf("data valida \n");
		}
		else{
			printf("data invalida \n");
		}
	}
	else{
		if((Dia >=1 && Dia<=30) && (Mes >=1 && Mes <=12 && Mes!=2)){
			printf("data valida \n");
		}
		else if ((Dia >=1 && Dia <=28) && (Mes == 2)){
			printf("data valida \n");
		}
		else{
			printf("data invalida \n");
		}
	}
	
	system("pause");
	return 0; 
}