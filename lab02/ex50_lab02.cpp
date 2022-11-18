#include <stdio.h>
#include <stdlib.h>

int main(){
		
	int AnoAtual, AnoNascimento, IdadeAtual;
	
	printf("Digite sua idade:\n");
    scanf("%d" ,&IdadeAtual);
		   
    printf("Digite o ano atual:\n");
    scanf("%d",&AnoAtual);
	   
    AnoNascimento = AnoAtual - IdadeAtual;
    
    printf("o ano de nascimento eh: %d /n", AnoNascimento);
	     	
   system("pause");
   return 0;
}