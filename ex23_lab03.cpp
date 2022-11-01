#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int AnoBissexto;
	
	printf("digite o ano: \n");
    scanf("%d",&AnoBissexto);

	if ((AnoBissexto % 4 == 0 && AnoBissexto % 100 != 0) || AnoBissexto % 400 == 0 ){
		printf("Este ano eh bissexto. \n");
	}
	else{
		printf("Nao eh bissexto. \n");
	}

	system ("pause");
    return 0;
}