#include <stdio.h>

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {6, 7, 8, 9, 10};
    int c[5] = {11, 12, 13, 14, 15};
    int d[15];
    int i, j;

    for (i = 0; i < 5; i++) {
        d[i] = a[i];
    }
    for (i = 5, j = 0; i < 10; i++, j++) {
        d[i] = b[j];
    }
    for (i = 10, j = 0; i < 15; i++, j++) {
        d[i] = c[j];
    }

    printf("Os elementos do vetor D são:\n");
    for (i = 0; i < 15; i++) {
        printf("%d ", d[i]);
    }
    printf("\n");

    return 0;
}
