#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void hipotenusa(int cateto1,int cateto2){
	printf("A hipotenusa desse triangulo, eh: %.0f \n", sqrt(pow(cateto1,2) + pow(cateto2,2)));
}

int main(){
    int cateto1, cateto2;
    
    printf("insira catetos do triangulo. \n");
    scanf("%d %d", &cateto1, &cateto2);
    
	hipotenusa(cateto1,cateto2);
	
    system("pause");
    return 0;
}
