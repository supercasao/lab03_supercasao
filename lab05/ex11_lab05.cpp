#include <stdio.h>
#include <stdlib.h>

void MediaNotas(float nota, float nota2, float nota3, char media){
	if(media == 'a' || media == 'A'){
		printf("a nota eh: %.2f \n",(nota + nota2 + nota3)/3);
	}else if(media == 'p' || media == 'P'){
		printf("a nota eh: %.2f \n",((nota*5) + (nota2*3) + (nota3*2))/10);
	}else
		printf("opcao invalida");
}

int main(){
    float nota, nota2, nota3;
    char media;
    
    printf("insira as notas: \n");
    scanf("%f %f %f",&nota, &nota2, &nota3);
    
    printf("Selecione o tipo de media:\n 'P' para ponderada\n 'A' para aritimetica \n");
    scanf(" %c", &media);
    
	MediaNotas(nota,nota2,nota3,media);
	
    system("pause");
    return 0;
}
