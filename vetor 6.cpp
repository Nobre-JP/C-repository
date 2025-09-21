#include <stdio.h>

int main() {
  int A[15], B[15];
  
  for (int i = 0; i < 15; i++) {
    printf("Digite o valor de A[%d]: ", i);
    scanf("%d", &A[i]);
  }
  
  for (int i = 0; i < 15; i++) {
    int fatorial = 1;
    for (int j = 1; j <= A[i]; j++) {
      fatorial *= j;
    }
    B[i] = fatorial;
  }
  
  printf("Vetor A: ");
  for (int i = 0; i < 15; i++) {
    printf("%d ", A[i]);
  }
  printf("\n");
  
  printf("Vetor B: ");
  for (int i = 0; i < 15; i++) {
    printf("%d ", B[i]);
  }
  printf("\n");

  return 0;
}
