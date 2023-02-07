#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  	struct estudante{
    	char nome[50], matricula[50], statusAp[10];
    	float notaP1, notaP2, notaP3, media;
  	};

  	struct estudante estudantes[5];

  	int maiorx, maiory, menory;

  	for (int i = 0; i < 3; i++){
    	printf("insira o nome do %do estudante: ", i + 1);
    	setbuf(stdin, NULL);
    	gets(estudantes[i].nome);
    	
    	printf("insira a matricula do %do estudante: ", i + 1);
    	setbuf(stdin, NULL);
    	gets(estudantes[i].matricula);
    	
    	printf("insira a nota da P1 do %do estudante: ", i + 1);
    	scanf("%f", &estudantes[i].notaP1);
    	
    	printf("insira a nota da P2 do %do estudante: ", i + 1);
    	scanf("%f", &estudantes[i].notaP2);
    	
    	printf("insira a nota da P3 do %do estudante: ", i + 1);
    	scanf("%f", &estudantes[i].notaP3);
    	
    	estudantes[i].media = (estudantes[i].notaP1 + estudantes[i].notaP2 + estudantes[i].notaP3)/3;
    	
    	if (estudantes[i].media >= 6){
      	strcpy(estudantes[i].statusAp, "Aprovado");
    	}else{
      	strcpy(estudantes[i].statusAp, "Reprovado");
    	}
  	}

  	for (int i = 0; i < 3; i++){
    	if (i == 0){
      	maiorx = i;
      	maiory = i;
      	menory = i;
    	}else{
      		if (estudantes[i].notaP1 > estudantes[maiorx].notaP1){
        		maiorx = i;
      		}else if (estudantes[i].media > estudantes[maiory].media){
        		maiory = i;
      		}else if (estudantes[i].media < estudantes[menory].media){
       		 	menory = i;
 			}
    	}
    	
    	printf("Ficha do aluno %s, %s:\n Nota P1: %.2f\n Nota P2: %.2f\n Nota P3: %.2f\n Media: %.2f\n Resultado Final: %s\n\n", estudantes[i].nome, estudantes[i].matricula, estudantes[i].notaP1, estudantes[i].notaP2, estudantes[i].notaP3, estudantes[i].media, estudantes[i].statusAp);
    	
  	}
  	
  	printf("A maior nota na primeira prova foi do estudante %s, sendo a nota %.2f.\n", estudantes[maiorx].nome, estudantes[maiorx].notaP1);
  	
  	printf("A maior media de notas foi do estudante %s, sendo a media %.2f.\n", estudantes[maiory].nome, estudantes[maiory].media);
  	
  	printf("A menor media de notas foi do estudante %s, sendo a media %.2f.\n", estudantes[menory].nome, estudantes[menory].media);
  
	system("pause");
    return 0;
}
