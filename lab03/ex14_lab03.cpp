#include <stdio.h>
#include <stdlib.h>

int main (){
	
	float TrabalhoLaboratorio, AvaliacaoSemestral, ExameFinal, MediaPonderada;
	
	printf("Digite as notas de 0 a 10, respectivamente, a trabalho de laboratorio, a avaliacao semestral e um exame final. :\n");
    scanf(" %f %f %f",&TrabalhoLaboratorio, &AvaliacaoSemestral, &ExameFinal);

	MediaPonderada = (TrabalhoLaboratorio*2 + AvaliacaoSemestral*3 + ExameFinal*5)/10;

    if(MediaPonderada > 4.9 && MediaPonderada <=10.0){
        printf("Aprovado, media: %.1f \n", MediaPonderada);
	}
	else if(MediaPonderada > 2.9 && MediaPonderada <=4.9){
        printf("recuperacao, media: %.1f \n", MediaPonderada);
    }
	else if(MediaPonderada >= 0 && MediaPonderada <=2.9){
        printf("recuperacao, media: %.1f \n", MediaPonderada);
    }
    else{
    	printf("notas invalidas...\n");
	}
    
    system ("pause");
    return 0;
}