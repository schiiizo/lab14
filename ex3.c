#include <stdio.h>

int mul(int a, int b) {
    if (b == 0) {
        return 0;
    }
    if (b == 1) {
        return a;
    }
    if (b < 0) {
        a = -a;
        b = -b;
    }
    if (b % 2 == 0) {
        int half_product = mul(a, b / 2);
        return half_product + half_product;
    } 
    else {
        return mul(a, b - 1) + a;
    }
}

int main() {
    int a, b;
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &a, &b);

    int resultado = mul(a, b);
    printf("O resultado da multiplicação é: %d\n", resultado);

    return 0;
}
