#include <stdio.h>
#include <stdlib.h>

int main(){
    float num[10] = { 0, 10, 20, 30, 40, 50, 60, 70, 80, 90};
  	float *ptr = num;

  	for (int i = 0; i < 10; i++){
    	printf("%do numero: %f\n", i+1, *ptr);
    	ptr++;
  	}
    
	system("pause");
    return 0;
}
