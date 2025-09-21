#include <stdio.h>

int main() {
    int a[15], b[15], c[30];
    int i, j;

    for (i = 0; i < 15; i++) {
        scanf("%d", &a[i]);
    }

    printf("Digite os valores do vetor B:\n");
    for (i = 0; i < 15; i++) {
        scanf("%d", &b[i]);
    }

    for (i = 0; i < 15; i++) {
        c[i] = a[i];
        c[i+15] = b[i];
    }

    printf("O vetor C resultante é:\n");
    for (i = 0; i < 30; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");

    return 0;
}

