#include <stdio.h>

int main() {
    int numeros[10];
    int i;

    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
    }

    printf("Vetor armazenado: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }

    return 0;
}

