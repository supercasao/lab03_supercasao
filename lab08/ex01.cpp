#include <stdio.h>
#include <stdlib.h>

int main(){
	struct horas {
    	int hora, min, sec;
	};
  
	struct data{
		int dia, mes, ano;
	};
  
	struct comp{
		struct data data;
    	struct horas horas;
    	char descricao[100];
	};

	struct comp user;
  		printf("insira a data do compromisso: \nDia: ");
  		scanf("%d", &user.data.dia);
  
 		 printf("Mes: ");
  		scanf("%d", &user.data.mes);
  
  		printf("Ano: ");
  		scanf("%d", &user.data.ano);
  
  		printf("insira o horario do compromisso: \n");
  	
  		printf("Hora: ");
		  scanf("%d", &user.horas.hora);
		  
		  printf("Minutos: ");
		  scanf("%d", &user.horas.min);
		  
		  printf("Segundos: ");
		  scanf("%d", &user.horas.sec);
		  
		  printf("Qual sera o compromisso? ");
		  setbuf(stdin, NULL);
		  
		  fgets(user.descricao, 100, stdin);
		  printf("Seu compromisso  %s esta marcado para o dia %d/%d/%d, aas %d:%d:%d",
		    user.data.dia,
		    user.data.mes,
		    user.data.ano,
		    user.horas.hora,
		    user.horas.min,
		    user.horas.sec,
		    user.descricao);
    
    system("pause");
    return 0;
}
