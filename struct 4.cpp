#include <stdio.h>
#include <math.h>

struct Ponto {
    float x;
    float y;
};

struct Retangulo {
    struct Ponto superior_esquerdo;
    struct Ponto inferior_direito;
};

float calcularArea(struct Retangulo r) {
    float largura = r.inferior_direito.x - r.superior_esquerdo.x;
    float altura = r.superior_esquerdo.y - r.inferior_direito.y;
    return fabs(largura * altura); // Usando fabs para garantir um valor positivo
}

float calcularDiagonal(struct Retangulo r) {
    float largura = r.inferior_direito.x - r.superior_esquerdo.x;
    float altura = r.superior_esquerdo.y - r.inferior_direito.y;
    return sqrt(largura * largura + altura * altura);
}

float calcularPerimetro(struct Retangulo r) {
    float largura = r.inferior_direito.x - r.superior_esquerdo.x;
    float altura = r.superior_esquerdo.y - r.inferior_direito.y;
    return 2 * (largura + altura);
}

int main() {
    struct Retangulo a;

    printf("Digite as coordenadas do ponto superior esquerdo (x y): ");
    scanf("%f %f", &a.superior_esquerdo.x, &a.superior_esquerdo.y);

    printf("Digite as coordenadas do ponto inferior direito (x y): ");
    scanf("%f %f", &a.inferior_direito.x, &a.inferior_direito.y);

    float area = calcularArea(a);
    float diagonal = calcularDiagonal(a);
    float perimetro = calcularPerimetro(a);

    printf("Area do retângulo: %.2f\n", area);
    printf("Comprimento da diagonal do retângulo: %.2f\n", diagonal);
    printf("Perímetro do retângulo: %.2f\n", perimetro);

    return 0;
}
