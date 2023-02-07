#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
	struct jogador{
		char nome[20];
	    int cartas[3];
	};
	
	struct jogador p[2];
	
	int escolhidos[6] = {0, 0, 0, 0, 0, 0}, cont = 0, naipe, carta;
	
	srand(time(NULL));
	
	for (int i = 0; i < 2; i++){
	    for (int j = 0; j < 3; j++){
	      p[i].cartas[j] = rand() % 52 + 1;
	      if (i == 0 && j == 0){
	        escolhidos[cont] = p[i].cartas[j];
	        cont++;
	      }else{
	        for (int k = 0; k < 6; k++){
	          if (p[i].cartas[j] == escolhidos[k]){
	            p[i].cartas[j] = rand() % 52 + 1;
	            k = 0;
	          }
	        }
	        escolhidos[cont] = p[i].cartas[j];
	        cont++;
	    }
	
	    printf("O jogador %d recebeu a carta ", i + 1);
	    
	    if ((p[i].cartas[j] % 13) == 0){
	    	carta = 13;
	    }else{
	        carta = p[i].cartas[j] % 13;
	    }

	    if (carta > 10){
	        switch (carta){
	        case 11:
	          printf("Valete");
	          break;
	        case 12:
	          printf("Rainha");
	          break;
	        case 13:
	          printf("Rei");
	          break;
	        }
	    }else{
	        printf("%d", carta);
	    }
	
	    naipe = p[i].cartas[j] / 13;

	    switch (naipe){
	    case 0:
	    case 1:
	        printf(" de Espadas.\n");
	        break;
	    case 2:
	        printf(" de Paus.\n");
	        break;
	    case 3:
	        printf(" de Copas.\n");
	        break;
	    case 4:
	        printf(" de Ouros.\n");
	        break;
	    }
		}
	}
	
	system("pause");
    return 0;
}
