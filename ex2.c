#include <stdio.h>

int soma_digitos(int n) {
    if (n < 10) {
        return n;
    } else {
        int ultimo_digito = n % 10;
        int restante = n / 10;
        return ultimo_digito + soma_digitos(restante);
    }
}

int main() {
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    int resultado = soma_digitos(numero);
    printf("A soma dos dígitos do número é: %d\n", resultado);

    return 0;
}
