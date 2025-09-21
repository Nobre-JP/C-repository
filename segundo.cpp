#include <stdio.h>
#include <math.h>

int main(void){
	
	float a, b, c, x1, x2, delta;
	
	printf("Digite o valor de ax: ");
	scanf("%f", &a);
	
	printf("Digite o valor de bx: ");
	scanf("%f", &b);
	
	printf("Digite o valor de cx: ");
	scanf("%f", &c);
	
	delta = ((b*b) - 4*a*c);
	x1 = (-b + (sqrt(delta))) / (2*a);
	x2 = (-b - (sqrt(delta))) / (2*a);
	
	printf("O valor de delta é de %.2f \n", delta);
	printf("O valor de X1 e de %.2f \n", x1);
	printf("O valor de X1 e de %.2f \n", x2);
	
}
