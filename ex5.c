#include <stdio.h>

double soma_array(double arr[], int tam) {
    if (tam == 0) {
        return 0.0;
    } else {
        return arr[tam - 1] + soma_array(arr, tam - 1);
    }
}

int main() {
    int tamanho;
    printf("Digite o tamanho do array: ");
    scanf("%d", &tamanho);

    if (tamanho <= 0) {
        printf("Tamanho inválido. O tamanho do array deve ser maior que 0.\n");
        return 1;
    }

    double arr[tamanho];
    printf("Digite os elementos do array:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%lf", &arr[i]);
    }

    double resultado = soma_array(arr, tamanho);
    printf("A soma dos elementos do array é: %.2lf\n", resultado);

    return 0;
}
