#include <stdio.h>
#include <stdlib.h>

int main(){
	int n1, n2, *pontn1, *pontn2;
	
    pontn1 = &n1;
    pontn1 = &n2;

    *pontn1 = 10;
    *pontn1 = 20;

    if (n1 > n2){
        printf("O maior valor eh: n1 = %d\nO menor valor eh: n2 = %d", n1, n2);
    }else{
        printf("O maior valor eh: n2 = %d\nO menor valor eh: n1 = %d", n2, n1);
    }
    
    system("pause");
    return 0;
}
