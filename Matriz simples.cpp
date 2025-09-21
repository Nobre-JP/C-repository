#include <stdio.h>
#include <stdlib.h>

int main() {
    int **matrix = NULL;  // Ponteiro para a matriz
    int numRows = 0;      // Número de linhas
    int numCols = 0;      // Número de colunas

    while (1) {
        printf("\n1. Inserir elemento\n");
        printf("2. Remover elemento\n");
        printf("3. Imprimir quantidade de elementos\n");
        printf("4. Imprimir elementos da matriz\n");
        printf("5. Sair\n");
        printf("Escolha uma opção: ");

        int choice;
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Inserir elemento
                printf("Digite o número da linha: ");
                int row, col, value;
                scanf("%d", &row);
                printf("Digite o número da coluna: ");
                scanf("%d", &col);

                if (row < 0 || col < 0) {
                    printf("Índices inválidos.\n");
                } else {
                    if (row >= numRows) {
                        matrix = (int **)realloc(matrix, (row + 1) * sizeof(int *));
                        for (int i = numRows; i <= row; i++) {
                            matrix[i] = NULL;
                        }
                        numRows = row + 1;
                    }

                    if (col >= numCols) {
                        for (int i = 0; i < numRows; i++) {
                            matrix[i] = (int *)realloc(matrix[i], (col + 1) * sizeof(int));
                            for (int j = numCols; j <= col; j++) {
                                matrix[i][j] = 0;
                            }
                        }
                        numCols = col + 1;
                    }

                    printf("Digite o valor a ser inserido: ");
                    scanf("%d", &value);
                    matrix[row][col] = value;
                }
                break;

            case 2:
                // Remover elemento
                printf("Digite o número da linha a ser removida: ");
                int rowToRemove;
                scanf("%d", &rowToRemove);

                if (rowToRemove >= 0 && rowToRemove < numRows) {
                    free(matrix[rowToRemove]);
                    matrix[rowToRemove] = NULL;
                } else {
                    printf("Linha fora do intervalo.\n");
                }
                break;

            case 3:
                // Imprimir quantidade de elementos
                int elementCount = 0;
                for (int i = 0; i < numRows; i++) {
                    for (int j = 0; j < numCols; j++) {
                        if (matrix[i] != NULL) {
                            if (matrix[i][j] != 0) {
                                elementCount++;
                            }
                        }
                    }
                }
                printf("Quantidade de elementos na matriz: %d\n", elementCount);
                break;

            case 4:
                // Imprimir elementos da matriz
                printf("Elementos da matriz:\n");
                for (int i = 0; i < numRows; i++) {
                    for (int j = 0; j < numCols; j++) {
                        if (matrix[i] != NULL) {
                            printf("%d\t", matrix[i][j]);
                        } else {
                            printf("0\t");
                        }
                    }
                    printf("\n");
                }
                break;

            case 5:
                // Libera a memória alocada e sai do programa
                for (int i = 0; i < numRows; i++) {
                    free(matrix[i]);
                }
                free(matrix);
                return 0;

            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    }
}

