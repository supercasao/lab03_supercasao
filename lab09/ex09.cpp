#include <stdio.h>
#include <stdlib.h>

int main(){
    float mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  	float *ptr = mat;
  	
  	for (int i = 0; i < 3; i++){
    	for (int j = 0; j < 3; j++){
      		printf("Posicao [%d][%d]: %f\n", i, j, *ptr);
      		*ptr++;
    	}
  	}
    
	system("pause");
    return 0;
}
