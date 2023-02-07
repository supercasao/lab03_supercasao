#include <stdio.h>
#include <stdlib.h>

int main(){
  	struct data{
    	int dia, mes, ano;
  	};

  	struct compromisso{
    	char titulo[60];
    	struct data data;
  	};

  	struct compromisso comp[5];

  	int mm, yy, cont = 0;

  	for (int i = 0; i < 5; i++){
	    printf("insira o %do compromisso: ", i + 1);
	    setbuf(stdin, NULL);
	    gets(comp[i].titulo);
	    
	    printf("insira a data do compromisso (dd/yy/mm): ");
	    scanf("%d/%d/%d", &comp[i].data.dia, &comp[i].data.mes, &comp[i].data.ano);
  	}

  	do{
	    cont = 0;
	
	    printf("Voce quer ver os compromissos de qual data (mm/yy)? ");
	    scanf("%d/%d", &mm, &yy);
	
	    for (int i = 0; i < 5; i++){
	      	if ((comp[i].data.mes == mm) && (comp[i].data.ano == yy)){
		        printf("Compromisso: %s\nData: %d/%d/%d\n\n", comp[i].titulo, comp[i].data.dia, comp[i].data.mes, comp[i].data.ano);
		        cont++;
	      	}
	    }
	
	    if (cont == 0){
	      printf("Não foram encontrados compromissos nessa data.\n");
	    }

  	} while ((mm != 0 && yy != 0));
  	
  	system("pause");
    return 0;
}
