#include <stdio.h>

int potencia(int x, int n) {
    if (n == 0) {
        return 1;
    }
    if (n == 1) {
        return x;
    }
    else {
        return x * potencia(x, n - 1);
    }
}

int main() {
    int x; 
    int n; 

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    int resultado = potencia(x, n);
    printf("%d^%d = %d\n", x, n, resultado);

    return 0;
}

