#include <stdio.h>
#include <stdlib.h>

int main(){
  	int x;
  	char *string;

  	printf("Digite quantos caracteres tem a frase: ");
  	scanf("%d", &x);

  	string = (char *)malloc(x * sizeof(char));

  	printf("Digite a frase: ");
  	setbuf(stdin, NULL);
  	fgets(string, x, stdin);

  	for (int i = 0; i < x; i++){
    	if(string[i] != 'a' && string[i] != 'A' && string[i] != 'e' && string[i] != 'E' && string[i] != 'i' && string[i] != 'I' && string[i] != 'o' && string[i] != 'O' && string[i] != 'u' && string[i] != 'U'){
      		printf("%c", string[i]);
    	}
  	}
  	
  	system("pause");
  	return 0;
}
