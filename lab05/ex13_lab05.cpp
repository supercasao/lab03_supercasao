#include <stdio.h>
#include <stdlib.h>

void operacao(float num, float num2, char sinal){
	float resultado;
    if(sinal == '+'){
        resultado = num + num2;
    }else if(sinal == '-'){
        resultado = num - num2;
    }else if(sinal == '*'){
        resultado = num * num2;
    }else if(sinal == '/'){
        resultado = num / num2;
    }
    printf("o resultado eh: %.2f \n", resultado);
}

int main(){
    float num, num2;
    char sinal;
    
    printf("insira os numeros. \n");
    scanf("%f %f",&num, &num2);
    
    printf("Digite a operacao desejada: \n adicao '-'\n subtracao '-'\n multiplicacao '*'\n divisao'/'\n");
    scanf(" %c", &sinal);
    
	operacao(num,num2,sinal);
	
    system("pause");
    return 0;
}
