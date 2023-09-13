#include <stdio.h>

char tipoTriangulo(int lado1, int lado2, int lado3) {
    if (lado1 == lado2 && lado1 == lado3) {
        return 'E'; // Equilátero
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        return 'I'; // Isósceles
    } else {
        return 'S'; // Escaleno
    }
}

int main() {
    int lado1, lado2, lado3;
    printf("Digite os três lados do triângulo: ");
    scanf("%d %d %d", &lado1, &lado2, &lado3);

    if (lado1 <= 0 || lado2 <= 0 || lado3 <= 0) {
        printf("Lados inválidos. Os lados devem ser positivos.\n");
    } else {
        char tipo = tipoTriangulo(lado1, lado2, lado3);
        if (tipo == 'E') {
            printf("O triângulo é Equilátero.\n");
        } else if (tipo == 'I') {
            printf("O triângulo é Isósceles.\n");
        } else {
            printf("O triângulo é Escaleno.\n");
        }
    }

    return 0;
}  