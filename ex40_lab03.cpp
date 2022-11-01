#include <stdio.h>
#include <stdlib.h>

int main()
{
    float  CustoDeFabrica,  PrecoConsumidor, Comissao, RouboDoEstado;

    printf("insira o custo de fabrica:  \n");
    scanf("%f", & CustoDeFabrica);

    if (CustoDeFabrica <= 12000) Comissao = 0.05;
    else if ( CustoDeFabrica <= 25000) Comissao = 0.1;
    else Comissao = 0.15;

    if (CustoDeFabrica <= 12000) RouboDoEstado = 0;
    else if ( CustoDeFabrica <= 25000) RouboDoEstado = 0.15;
    else RouboDoEstado = 0.2;

    PrecoConsumidor =  CustoDeFabrica * (1 + Comissao + RouboDoEstado);

    printf("O preco final ao consumidor eh: %.2f \n",  PrecoConsumidor);

	system ("pause");
    return 0;
}