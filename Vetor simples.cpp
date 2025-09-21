#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array = NULL;  
    int size = 0;       
    int capacity = 0;   

    while (1) {
        printf("\n1. Inserir elemento\n");
        printf("2. Remover elemento\n");
        printf("3. Imprimir quantidade de elementos\n");
        printf("4. Imprimir elementos do vetor\n");
        printf("5. Sair\n");
        printf("Escolha uma opção: ");

        int choice;
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (size == capacity) {
            
                    capacity = (capacity == 0) ? 1 : capacity * 2;
                    array = (int *)realloc(array, capacity * sizeof(int));
                    if (array == NULL) {
                        printf("Erro na alocação de memória.\n");
                        return 1;
                    }
                }
                printf("Digite o valor a ser inserido: ");
                scanf("%d", &array[size]);
                size++;
                break;

            case 2:
                if (size > 0) {
                    printf("Digite o índice do elemento a ser removido: ");
                    int index;
                    scanf("%d", &index);
                    if (index >= 0 && index < size) {
                        for (int i = index; i < size - 1; i++) {
                            array[i] = array[i + 1];
                        }
                        size--;
                    } else {
                        printf("Índice fora do intervalo.\n");
                    }
                } else {
                    printf("O vetor está vazio.\n");
                }
                break;

            case 3:
                printf("Quantidade de elementos no vetor: %d\n", size);
                break;

            case 4:
                printf("Elementos do vetor: ");
                for (int i = 0; i < size; i++) {
                    printf("%d ", array[i]);
                }
                printf("\n");
                break;

            case 5:
                free(array);
                return 0;

            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    }
}

