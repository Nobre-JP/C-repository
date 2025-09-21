#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int letras = 0, digitos = 0, i = 0;
    printf("Digite uma string: ");
    fgets(str, 100, stdin);

    while(str[i] != '\0') {
        if(isalpha(str[i])) {
            letras++;
        } else if(isdigit(str[i])) {
            digitos++;
        }
        i++;
    }

    printf("A string digitada tem %d letras e %d digitos.\n", letras, digitos);
    return 0;
}
