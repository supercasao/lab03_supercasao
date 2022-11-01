#include <stdio.h>
#include <stdlib.h>

int main() {
    float Remuneracao, NovoAjuste, BonusPorTempo;
    int TempoServico;

    printf("Digite o salario atual do funcionario e o tempo de servico em anos, respectivamente: ... \n ");
    scanf("%f %d", &Remuneracao, &TempoServico);

    if (Remuneracao <= 500.0) NovoAjuste = 0.25;
    else if (Remuneracao <= 1000.0) NovoAjuste = 0.20;
    else if (Remuneracao <= 1500.0) NovoAjuste = 0.15;
    else if (Remuneracao <= 2000.0) NovoAjuste = 0.10;
    else NovoAjuste = 0.0;
    
    if (TempoServico< 1) BonusPorTempo = 0.0;
    else if (TempoServico <= 3) BonusPorTempo = 100.0;
    else if (TempoServico <= 6) BonusPorTempo = 200.0;
    else if (TempoServico <= 10) BonusPorTempo = 300.0;
    else BonusPorTempo = 500.0;

    printf("O salario reajustado eh: %.2f", Remuneracao * (1 + NovoAjuste) + BonusPorTempo);

    system ("pause");
    return 0;
}