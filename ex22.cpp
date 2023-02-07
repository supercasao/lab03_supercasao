#include <stdio.h>
#include <stdlib.h>

int somaArr(int *a, int *b, int *c){
  	for (int i = 0; i < 5; i++){
    	*c += (*a + *b);
    	a++;
    	b++;
  	}
}

int main(){
    int a[5] = {1,2,3,4,5};
  	int b[5] = {6,7,8,9,10};
  	int c = 0;

  	somaArr(&a, &b, &c);
  
  	printf("Soma do array A e array B: %d", c);
  	
  	system("pause");
    return 0;
}
