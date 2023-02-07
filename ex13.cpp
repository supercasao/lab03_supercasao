#include <stdio.h>
#include <stdlib.h>

void verificaString(char *str1, int strLen1, char *str2, int strLen2)
{
  int verif = 0, l, k = 0;
  char *p = str1;
  char *q = str2;

  	for (int i = 0; i < strLen1; i++){
    	if (verif == 1)
    		break;

    	l = 0;
    	q = str2;
    
    	for(int j = i; j < strLen1; j++){
			if (l >= strLen2)
        		break;

        	if (*p == *q){
          	k++;  
        	}
        
        	q++;
        	l++;

        	if (k == strLen2){
          		verif = 1;
          		break;
        	}
    	}
   		p++;
    }

    if (verif == 1){
      printf("A segunda frase aparece na primeira!");
    }else{
      printf("A segunda frase NAO aparece na primeira.");
    }
  
}

int main(){
    char str1[20], str2[20];

  	printf("Digite a primeira frase: ");
  	gets(str1);
  	
  	printf("Digite a segunda frase: ");
  	gets(str2);

  	verificaString(&str1, strlen(str1), &str2, strlen(str2));
    
	system("pause");
    return 0;
}
