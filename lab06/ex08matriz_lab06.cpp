#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A[2][2],B[2][2],C[2][2],D[2][2],c;
    int i ,j;
    char op;
    for(i = 0; i<= 1; i++){
        for(j = 0;j <= 1; j++){
            printf("Digite uma valor para linha %d coluna %d da matriz A: \n",i,j);
            scanf("%f",&A[i][j]);
        }
    }
    for(i = 0; i<= 1; i++){
        for(j = 0;j <= 1; j++){
            printf("Digite uma valor para linha %d coluna %d da matriz B: \n",i,j);
            scanf("%f",&B[i][j]);
        }
    } 
    do{
        fflush(stdin);
        printf("\n-------//--------\n");
        printf("Digite uma opcao: \n");
        printf("a) somar as duas matrizes\n");
        printf("b) subtrair a primeira matriz da segunda\n");
        printf("c) adicionar uma constante às duas matrizes\n");
        printf("d) imprimir as matrizes\n");
        printf("e) Sair\n");
        scanf("%c",&op);
        switch(op){
            case 'a':
            printf("Matriz soma das outras duas digitadas: \n");
            for(i = 0; i<= 1; i++){
                for(j = 0;j <= 1; j++){
                    C[i][j] = A[i][j] + B[i][j];
                    printf("%f ",C[i][j]);
                }
                printf("\n");
            }
            break;
            case 'b':
            printf("Matriz subtracao da matriz A em B: \n");
            for(i = 0; i<= 1; i++){
                for(j = 0;j <= 1; j++){
                    D[i][j] = B[i][j] - A[i][j];
                    printf("%f ",D[i][j]);
                }
                printf("\n");
            }
            break;
            case 'c':
            printf("Digite uma constante para soma: \n");
            scanf("%f",&c);
            for(i = 0; i<= 1; i++){
                for(j = 0;j <= 1; j++){
                    A[i][j] = A[i][j] + c;
                    B[i][j] = B[i][j] + c;
                }
            }
            break;
            case 'd':
            printf("Matriz A: \n");
            for(i = 0; i<= 1; i++){
                for(j = 0;j <= 1; j++){
                    printf("%f ",A[i][j]);
                }
                printf("\n");
            }
            printf("Matriz B: \n");
            for(i = 0; i<= 1; i++){
                for(j = 0;j <= 1; j++){
                    printf("%f ",B[i][j]);
                }
                printf("\n");
            }
            break;
            case 'e':
            system("pause");
            return 0;
            break;
            default:
            printf("Digite uma opcao valida!\n");
            break;
        }
    }while(op != 'e');
    system("pause");
    return 0;
}
