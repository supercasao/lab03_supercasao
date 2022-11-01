#include <stdio.h>
#include <stdlib.h>

int main(){
	
    int HoraChegada, MinutosChegada, HoraPartida, MinutoPartida, TempPartida, TempPartida2, TempPermanencia, HorasPermanecidas;
    float PrecoTotal = 0;

    printf("Digite as horas e minutos da chegada: \n");
    scanf("%d %d", &HoraChegada, &MinutosChegada);

    printf("Digite as horas e minutos da partida: \n");
    scanf("%d %d", &HoraPartida, &MinutoPartida);

    if (HoraChegada > HoraPartida) HoraChegada -= 24;

    TempPartida = HoraChegada * 60 + MinutosChegada;
    TempPartida2 = HoraPartida * 60 + MinutoPartida;
    TempPermanencia = TempPartida2 - TempPartida;

    if (TempPermanencia % 60 > 0) {
        HorasPermanecidas = TempPermanencia / 60 + 1;
    } 
	else {
        HorasPermanecidas = TempPermanencia / 60;
    }

    if (HorasPermanecidas <= 2) {
        PrecoTotal = HorasPermanecidas * 1;
    } 
	else if (HorasPermanecidas <= 4) {
        PrecoTotal = HorasPermanecidas * 1.4;
    } 
	else {
        PrecoTotal = HorasPermanecidas * 2;
    }

    printf("O total a pagar eh de %.2f \n", PrecoTotal);
	
	system ("pause");
    return 0;
}