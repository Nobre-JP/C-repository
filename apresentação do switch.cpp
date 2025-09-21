#include <stdio.h>
#include <stdlib.h>
int main()
{
 int escolha;

printf("Dias da Semana? \n");
printf("1\n");
printf("2\n");
printf("3\n");
printf("4\n");
printf("5\n");
printf("6\n");
printf("7\n");
scanf("%d", &escolha);

switch(escolha)
{
    case 1: printf("Domingo, Fim de Semana");
        break;
    case 2:
        printf("Segunda, dia útil");
        break;
    case 3:
        printf("Terça, dia útil");
        break;
    case 4:
        printf("Quarta. dia útil");
        break;
    case 5:
        printf("Quinta, dia útil");
        break;
    case 6:
        printf("Sexta, dia útil");
        break;
    case 7:
        printf("Sábado, dia úti");
        break;
    default:
        printf("Nao é um dia da semana, animal");
        break;
}
}

