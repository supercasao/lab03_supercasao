#include <stdio.h>
#include <stdlib.h>

int main(){
	
	struct estudante{
    	char nome[50], curso[100], matricula[20];
  	};

  	struct estudante user[5];

  	for (int i = 0; i < 5; i++){
    	printf("insira o nome do %do estudante: ", i + 1);
    	setbuf(stdin, NULL);
    	gets(user[i].nome);
    	
    	printf("insira e o curso do %do estudante: ", i + 1);
    	setbuf(stdin, NULL);
    	gets(user[i].curso);
    	
    	printf("insira a matricula do %do estudante: ", i + 1);
    	setbuf(stdin, NULL);
    	gets(user[i].matricula);
  	}

  	for (int i = 0; i < 5; i++){
    	printf("% do estudante\n Nome: %s\n Curso: %s\n Matricula: %s\n\n", i+1, user[i].nome, user[i].curso, user[i].matricula);
  	}
  
  	system("pause");
    return 0;
}
