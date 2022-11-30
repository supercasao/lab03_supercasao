#include <stdio.h>
#include <stlib.h>

int main(){
    int i, x ,y, z;
    int A[8];
    
    for(i = 0; i <= 7; i++){
        printf("Digite um valor para a posicao [%d]: \n",i);
        scanf("%d",&A[i]);
    }
    
    printf("Digite duas posicoes do vetor: \n");
    scanf("%d %d",&x,&y);
    
    z = A[x] + A[y];
    
    printf("Soma dos valores em %d e %d: %d\n",x,y,z);
    
    system("pause");
    return 0;
}
