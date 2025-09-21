#include <stdio.h>

struct Hora {
    int hora;
    int minuto;
    int segundo;
};

int main() {
    struct Hora horas[5];

    for (int i = 0; i < 5; i++) {
        printf("Digite a hora, minuto e segundo da %dª hora (no formato HH MM SS): ", i + 1);
        scanf("%d %d %d", &horas[i].hora, &horas[i].minuto, &horas[i].segundo);
    }

    struct Hora maiorHora = horas[0];
    for (int i = 1; i < 5; i++) {
        if (horas[i].hora > maiorHora.hora ||
            (horas[i].hora == maiorHora.hora && horas[i].minuto > maiorHora.minuto) ||
            (horas[i].hora == maiorHora.hora && horas[i].minuto == maiorHora.minuto && horas[i].segundo > maiorHora.segundo)) {
            maiorHora = horas[i];
        }
    }

    printf("A maior hora é: %02d:%02d:%02d\n", maiorHora.hora, maiorHora.minuto, maiorHora.segundo);

    return 0;
}
