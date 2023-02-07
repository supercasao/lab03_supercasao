#include <stdio.h>
#include <stdlib.h>

int ordenavetores(int *a, int *b, int *c){
  	int *vet[3] = {a, b, c}, valor;
  	int cont = 0;

  	for (int i = 0; i < 3; ++i){
    	for (int j = i + 1; j < 3; ++j){
      		if (*vet[i] > *vet[j]){
		        valor = *vet[i];
		        *vet[i] = *vet[j];
		        *vet[j] = valor;
      		}if (*vet[i] == *vet[j])
        		cont++;
    	}
  	}
  return cont;
}

int main(){
    int a, b, c, check;

  	printf("Digite o numero A: ");
  	scanf("%d", &a);
  	
  	printf("Digite o numero B: ");
  	scanf("%d", &b);
  	
 	printf("Digite o numero C: ");
  	scanf("%d", &c);

  	check = ordenavetores(&a, &b, &c);

  	if (verif == 0){
    	printf("Nao existem numeros repetidos");
  	}else if (verif == 3){
    	printf("Todos os numeros sao iguais");
  	}

  	printf("\nValores ordenados: %d, %d, %d", a, b, c);
    
	system("pause");
    return 0;
}
