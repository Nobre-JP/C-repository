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
        printf("Segunda, dia �til");
        break;
    case 3:
        printf("Ter�a, dia �til");
        break;
    case 4:
        printf("Quarta. dia �til");
        break;
    case 5:
        printf("Quinta, dia �til");
        break;
    case 6:
        printf("Sexta, dia �til");
        break;
    case 7:
        printf("S�bado, dia �ti");
        break;
    default:
        printf("Nao � um dia da semana, animal");
        break;
}
}

