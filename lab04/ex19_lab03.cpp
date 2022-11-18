#include <stdio.h>
#include <stdlib.h>

int main()
{   
    int a = 0, b, c = 0, d= 0, e = 0, f = 0, g = 0, h = 0;
    printf("Digite o valor de saque: \n");
    scanf("%d",&b);
    if(b >= 100){
        do{
            a = a + 1;
            b = b - 100;
        }while(b >= 100);
    }
    if(b >= 50){
        do{
            c = c + 1;
            b = b - 50;
        }while(b >= 50);
    }
    if(b >= 20){
        do{
            d= d+ 1;
            b = b - 20;
        }while(b >= 20);
    }
    if(b >= 10){
        do{
           e=e+ 1;
            b = b - 10;
        }while(b >= 10);
    }
    if(b >= 5){
        do{
            f = f + 1;
            b = b - 5;
        }while(b >= 5);
    }
    if(b >= 2){
        do{
            g = g + 1;
            b = b - 2;
        }while(b >= 2);
    }
    if(b >= 1){
        do{
            h = h + 1;
            b = b - 1;
        }while(b >= 1);
    }
    printf("Notas correspondetes ao saque: \n");
    printf("%d de 100 reais\n",a);
    printf("%d de 50 reais\n",c);
    printf("%d de 20 reais\n",d);
    printf("%d de 10 reais\n",e);
    printf("%d de 5 reais\n",f);
    printf("%d de 2 reais\n",h);
    printf("%d de 1 real\n",b);
    
    
    system("pause");
    return 0;
}