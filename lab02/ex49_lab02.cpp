#include <stdio.h>
#include <stdlib.h>

int main() {
	
   int h, m , s;
   int duracao;
   
   printf("digite a hora inicial em: horas, minutos e segundos e a duracao toral em segundos");
   scanf("%d %d %d %d", &h, &m, &s, &duracao);
   
   int horas, minutos, segundos;
   
   horas = duracao / 3600;
   minutos = (duracao-(horas*3600))/60;
   segundos = duracao - (horas*3600)-(minutos*60);
   
   int hf, mf, sf;
   
   hf= h + horas;
   mf= m + minutos;
   sf= s + segundos;
   printf("\nA experiencia terminara as: %d:%d:%d \n", hf, mf, sf );
   
   system("pause");
   return 0;
}