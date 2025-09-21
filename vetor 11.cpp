#include <stdio.h>

int main() {
    int a[6], b[6], c[6], d[6];
    int i;

    printf("Digite 6 valores para o vetor A:\n");
    for (i = 0; i < 6; i++) {
        scanf("%d", &a[i]);
    }

    printf("Digite 6 valores para o vetor B:\n");
    for (i = 0; i < 6; i++) {
        scanf("%d", &b[i]);
    }

    for (i = 0; i < 6; i++) {
        if (i % 2 == 0) {
            d[i/2] = a[i];
            d[3+i/2] = b[i];
        } else {
            c[(i-1)/2] = a[i];
            c[2+(i-1)/2] = b[i];
        }
    }

    printf("Vetor C: ");
    for (i = 0; i < 6; i++) {
        printf("%d ", c[i]);
    }

    printf("\nVetor D: ");
    for (i = 0; i < 6; i++) {
        printf("%d ", d[i]);
    }

    return 0;
}

