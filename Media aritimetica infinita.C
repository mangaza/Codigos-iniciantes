#include <stdio.h>

float mediaAritmetica() {
    int contador = 0;
    float soma = 0;
    int valor;

    printf("Digite os valores (digite um valor negativo para encerrar):\n");

    while (1) {
        scanf("%d", &valor);

        if (valor < 0) {
            break;
        }

        soma += valor;
        contador++;
    }

    if (contador == 0) {
        return 0; // Retorna 0 se nenhum valor válido for inserido
    }

    return soma / contador;
}

int main() {
    float media = mediaAritmetica();

    if (media == 0) {
        printf("Nenhum valor válido foi inserido.\n");
    } else {
        printf("A média dos valores é: %.2f\n", media);
    }

    return 0;
}
