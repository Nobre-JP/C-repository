#include<stdio.h>
#include<math.h>

struct coordenadas{
	
	float x;
	float y;
	float a;
	float b;
	float d;
};
int main(void){
	
	struct coordenadas a;
	
	printf("Digite o valor de X: ");
	scanf("%f", &a.x);
	printf("Digite o valor de Y: ");
	scanf("%f", &a.y);
	printf("Digite o valor de A: ");
	scanf("%f", &a.a);
	printf("Digite o valor de B: ");
	scanf("%f", &a.b);
	
	a.d=(sqrt(pow(a.x*a.b-a.x*a.a, 2))+(pow(a.y*a.b-a.y*a.a, 2)));
	
	printf("A distancia do ponto original do ponto digitado eh de: %.2f", a.d);
}
