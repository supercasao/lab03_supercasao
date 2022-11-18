#include <stdio.h>
#include <stdlib.h>

int main (){
	
	float Nota1, Nota2, Nota3, MediaPonderada;
	
	printf("Digite as notas, lembrando que a primeira e a segunda prova têm peso 1 e a terceira tem peso 2:\n");
    scanf(" %f %f %f",&Nota1, &Nota2, &Nota3);

	MediaPonderada = (Nota1 + Nota2+ (Nota3 * 2))/4;

    if(MediaPonderada >= 60){
        printf("Aprovado, media: %.2f  \n", MediaPonderada);
	}
	else{
        printf("Reprovado, media: %.2f \n", MediaPonderada);
    }

    system ("pause");
    return 0;
}