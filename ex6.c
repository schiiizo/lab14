#include <stdio.h>
#include <stdbool.h>

bool divisiveis(int arr[], int tam, int x) {
    if (tam == 0) {
        return true;
    }
    else {
        if (arr[tam - 1] % x != 0) {
            return false;
        }
        else {
            return divisiveis(arr, tam - 1, x);
        }
    }
}

int main() {
    int tamanho, divisor;
    printf("Digite o tamanho do array: ");
    scanf("%d", &tamanho);

    if (tamanho <= 0) {
        printf("Tamanho inválido. O tamanho do array deve ser maior que 0.\n");
        return 1;
    }

    int arr[tamanho];
    printf("Digite os elementos do array:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Digite o valor do divisor (inteiro x): ");
    scanf("%d", &divisor);

    bool resultado = divisiveis(arr, tamanho, divisor);
    if (resultado) {
        printf("Todos os elementos do array são divisíveis por %d.\n", divisor);
    }
    else {
        printf("Pelo menos um elemento do array não é divisível por %d.\n", divisor);
    }

    return 0;
}
