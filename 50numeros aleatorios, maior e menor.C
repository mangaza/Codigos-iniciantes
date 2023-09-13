#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerarNumerosAleatorios(int numeros[], int tamanho) {
    srand(time(NULL)); // Inicializa a semente com o tempo atual

    for (int i = 0; i < tamanho; i++) {
        numeros[i] = rand() % 150; // Gere números inteiros aleatórios entre 0 e 999
    }
}

void encontrarMaiorMenor(int numeros[], int tamanho, int *maior, int *menor) {
    *maior = *menor = numeros[0]; // Inicializa o maior e o menor com o primeiro número

    for (int i = 1; i < tamanho; i++) {
        if (numeros[i] > *maior) {
            *maior = numeros[i];
        } else if (numeros[i] < *menor) {
            *menor = numeros[i];
        }
    }
}

int main() {
    int numeros[50];
    int maior, menor;

    gerarNumerosAleatorios(numeros, 50);
    encontrarMaiorMenor(numeros, 50, &maior, &menor);

    printf("Números gerados aleatoriamente:\n");
    for (int i = 0; i < 50; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\nO maior número é: %d\n", maior);
    printf("O menor número é: %d\n", menor);

    return 0;
}
