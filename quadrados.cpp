#include <stdio.h>
int main() {
    int tamanho, i, j;
    printf("Digite o tamanho do lado do quadrado (entre 1 e 20): ");
    scanf("%d", &tamanho);
    
    if (tamanho < 1 || tamanho > 20) {
        printf("Tamanho invalido! Por favor, digite um tamanho entre 1 e 20.\n");
        return 1; 
    }

    for (i = 0; i < tamanho; i++) {
        for (j = 0; j < tamanho; j++) {
            
            if (i == 0 || i == tamanho - 1 || j == 0 || j == tamanho - 1) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}