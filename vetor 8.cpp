#include <stdio.h>

int main() {
    int a[20], b[20];
    int i, j;

    printf("Digite os valores do vetor A:\n");
    for (i = 0; i < 20; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0, j = 19; i < 20; i++, j--) {
        b[j] = a[i];
    }

    printf("O vetor A original �:\n");
    for (i = 0; i < 20; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    printf("O vetor B invertido �:\n");
    for (i = 0; i < 20; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");

    return 0;
}

