#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int max(int a, int b, int c) {
    int max = a;

    if (b > max) {
        max = b;
    }

    if (c > max) {
        max = c;
    }

    return max;
}

int main() {
    setlocale(LC_ALL, NULL );
    int num1, num2, num3;
    printf("Digite três números: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int resultado = max(num1, num2, num3);
    printf("O maior valor é: %d\n", resultado);

    return 0;
}