#include <stdio.h>

void calcularTabuada(int N) {
    for (int i = 1; i <= N; i++) {
        printf("Tabuada do %d:\n", i);
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }
}

int main() {
    int N;

    printf("Digite um valor N para calcular a tabuada de 1 até N: ");
    scanf("%d", &N);

    calcularTabuada(N);

    return 0;
}
