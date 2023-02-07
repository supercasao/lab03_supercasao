#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Endereco{
  	char rua[30], bairro[20], cidade[20], estado[10], cep[9];
};

struct Cadastro{
  	char nome[20], identidade[9], cpf[12], estCivil[10], telefone[12], sexo;
  	float salario;
  	int idade;
  	struct Endereco end;
};

struct Cadastro cad[2];

int main(){
  	int mIdade, masc[5], contMasc = 0, salM[5], contSal = 0;
  	char identidade[9];

  	for (int i = 0; i < 5; i++){
	    printf("\n===== %do CADASTRO =====\n", i + 1);
	    
	    printf("insira o nome: ");
	    setbuf(stdin, NULL);
	    gets(cad[i].nome);
	    
	    printf("insira idade: ");
	    scanf("%d", &cad[i].idade);
	    
	    printf("insira o numero de identidade: ");
	    setbuf(stdin, NULL);
	    gets(cad[i].identidade);
	    
	    printf("insira o numero de CPF: ");
	    setbuf(stdin, NULL);
	    gets(cad[i].cpf);
	    
	    printf("insira o endereco:\n Rua: ");
	    setbuf(stdin, NULL);
	    gets(cad[i].end.rua);
	    
	    printf(" Bairro: ");
	    setbuf(stdin, NULL);
	    gets(cad[i].end.bairro);
	    
	    printf(" Cidade: ");
	    setbuf(stdin, NULL);
	    gets(cad[i].end.cidade);
	    
	    printf(" Estado: ");
	    setbuf(stdin, NULL);
	    gets(cad[i].end.estado);
	    
	    printf(" CEP: ");
	    setbuf(stdin, NULL);
	    gets(cad[i].end.cep);
	    
	    printf("insira o salario: ");
	    scanf("%f", &cad[i].salario);
	    
	    printf("insira o Estado Civil: ");
	    setbuf(stdin, NULL);
	    gets(cad[i].estCivil);
	    
	    printf("insira o telefone: ");
	    setbuf(stdin, NULL);
	    gets(cad[i].telefone);
	    
	    printf("insira o sexo [M] Masculino  [F] Feminino: ");
	    setbuf(stdin, NULL);
	    scanf(" %c", &cad[i].sexo);

	    if(i == 0){
	      mIdade = i;
	    }
	    else if(cad[i].idade > cad[mIdade].idade){
	      mIdade = i;
	    }if((cad[i].sexo == "m") || (cad[i].sexo == "M")){
	      masc[contMasc] = i;
	      contMasc++;
	    }if(cad[i].salario > 1000){
	      salM[contSal] = i;
	      contSal++;
	    }
  	}

	printf("\nA pessoa com maior idade foi:");
	  
	printf("%s\n", cad[mIdade].nome);
	
	printf("\nAs pessoas do sexo masculino sao: \n");
	
	for (int i = 0; i < sizeof(masc); i++){
	    printf("\n%s", cad[masc[i]].nome);
	}
	
	  printf("\nAs pessoas com salario maior que 1000:\n");
	  
	for (int i = 0; i < sizeof(salM); i++){
	    printf("\n%s", cad[salM[i]].nome);
	}
	
	printf("Pesquise uma identidade: ");
	
	for (int i = 0; i < 5; i++){
	    if (strcmp(cad[i].identidade, identidade) == 0){
	      	printf("Nome: %s\nIdade: %d\nIdentidade: %s\nCPF: %s\nRua: %s\nBairro: %s\nCidade: %s\nEstado: %s\nCEP: %s\nSalario: %.2f\nEstado Civil: %c\nTelefone: %s\nSexo: %c\n",
	             cad[i].nome,
	             cad[i].idade,
	             cad[i].identidade,
	             cad[i].cpf,
	             cad[i].end.rua,
	             cad[i].end.bairro,
	             cad[i].end.cidade,
	             cad[i].end.estado,
	             cad[i].end.cep,
	             cad[i].salario,
	             cad[i].estCivil,
	             cad[i].telefone,
	             cad[i].sexo);
	    }
	}
  
  	system("pause");
    return 0;
}
