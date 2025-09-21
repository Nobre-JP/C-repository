#include <stdio.h>
#include <stdlib.h>
int main (void){
int I;
float SOMA = 0, MEDTUR, MEDIA[8];
printf ("\n O usuario devera digitar as 8 medias, teclando <ENTER> depois de cada uma delas.");
for (I = 0; I < 8; I++)
{
printf ("\n Digite a media do aluno %d: ", I+1);
scanf("%f", &MEDIA[I]);
SOMA += MEDIA[I];
}
MEDTUR = SOMA / 8;
for (I = 0; I < 8; I++)
{
printf ("\n Nota do aluno %d : %f", I, MEDIA[I]);
}
printf ("\nMedia da Turma = %.2f \n\n", MEDTUR);
}
