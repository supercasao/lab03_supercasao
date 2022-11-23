#include <stdio.h>
#include <stdlib.h>

int primo(int a)
{
    int i, b, c, cont;
    if(a == 1 || a == 3 || a == 5 || a == 7){
        return 1;
    }else if(a % 2 == 0 || a % 3 == 0 || a % 5 == 0 || a % 7 == 0){
        return 0;
    }
    c = ((a / 2) + 1);
    for (i = 3; i <= c; i += 2) {
        cont = 0;
        if (a % i == 0) {
            cont++;
            break;
        }
    }
    if (cont > 0){ 
        return 0;
    }else{
        return 1;
    }
}


int main()
{
    int x, y, i, j = 0;
    	
	do{
    	printf("Digite um numero inteiro positivo: \n");
    	scanf("%d",&x);
    }while(x < 0);
    	for(i = 1;i <= x; i++){
        	y = primo(i);
        	if(y != 0){
            j++;
        	}
    	}
    	
    printf("Numeros primos abaixo de %d: %d\n",x,j);
    system("pause");
    return 0;
}

