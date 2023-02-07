#include <stdio.h>
#include <stlib.h>
#include <string.h>

int main(){

	struct pessoa{
		char nome[50], endereco[100];
		int tel;
	};
	
	struct pessoa user[5];
	struct pessoa userTemp;
	int menor, x;
	
	for (int i = 0; i < 5; i++){
	    printf("insira o nome da %do pessoa: ", i + 1);
	    setbuf(stdin, NULL);
	    gets(user[i].nome);
	    
	    printf("insira o endereco da %do pessoa: ", i + 1);
	    setbuf(stdin, NULL);
	    gets(user[i].endereco);
	    
	    printf("insira o telefone da %do pessoa: ", i + 1);
		scanf("%d", &user[i].tel);
	}
	
	for (int i = 0; i < 5; i++){
	    if (i == 0){
	    	menor = user[i].nome[0];
	    }else{
	      for (int j = 0; j < 5; j++){
	        if(user[i].nome[0] > user[j].nome[0]){
	          strcpy(userTemp.nome, user[j].nome);
	          strcpy(userTemp.endereco, user[j].endereco);
	          userTemp.tel = user[j].tel;
	
	          strcpy(user[j].nome, user[i].nome);
	          strcpy(user[j].endereco, user[i].endereco);
	          user[j].tel = user[i].tel;
	
	          strcpy(user[i].nome, userTemp.nome);
	          strcpy(user[i].endereco, userTemp.endereco);
	          user[i].tel = userTemp.tel;
	        }
	      }
	    }
	  }
	
	for (int i = 4; i >= 0; i--){
		printf("Nome: %s\nEndereco: %s\nTelefone: %d\n\n", user[i].nome, user[i].endereco, user[i].tel);
	}
	
	system("pause");
    return 0;
}
