#include <stdio.h>
#include <stdlib.h>

int main(){
	
  	struct funcionario {
    	char nome[20], sexo, cargo[30], cpf[12];
    	int idade, diaN, mesN, anoN, setor;
    	float salario;
 	};

  	struct funcionario fn;

  	printf("insira o nome do funcionario: ");
  	setbuf(stdin, NULL);
  	gets(fn.nome);
  	
  	printf("insira a idade do funcionario: ");
  	setbuf(stdin, NULL);
  	scanf("%d", &fn.idade);
  	
	printf("insira o sexo do funcionario (M/F): ");
	setbuf(stdin, NULL);
	scanf("%c", &fn.sexo);
	
	printf("insira o CPF do funcionario: ");
	setbuf(stdin, NULL);
	gets(fn.cpf);
	
	printf("insira a data de nascimento do funcionario (dd/mm/yy): ");
	scanf("%d/%d/%d", &fn.diaN, &fn.mesN, &fn.anoN);
	
	printf("insira o Codigo de Setor do funcionario (0-99): ");
	scanf("%d", &fn.setor);
	
	printf("insira o cargo do funcionario: ");
	setbuf(stdin, NULL);
	gets(fn.cargo);
	
	printf("insira o salario do funcionario: ");
	setbuf(stdin, NULL);
	scanf("%f", &fn.salario);
	
	printf("Os dados do funcionario sao:\n Nome: %s\n Idade: %d anos\n Sexo: %c\n CPF: %s\n Data de Nascimento: %d/%d/%d\n Codigo do Setor: %d\n Cargo: %s\n Salario: %2.f", fn.nome, fn.idade, fn.sexo, fn.cpf, fn.diaN, fn.mesN, fn.anoN, fn.setor, fn.cargo, fn.salario);
	
	system("pause");
    return 0;
}
