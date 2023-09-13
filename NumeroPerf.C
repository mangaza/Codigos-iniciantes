#include <stdio.h>
#include <stdbool.h>

bool ehPerfeito(int num) {
    int somaDivisores = 0;

    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            somaDivisores += i;
        }
    }

    return (somaDivisores == num);
}

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (ehPerfeito(num)) {
        printf("%d e um numero perfeito.\n", num);
    } else {
        printf("%d nao e um numero perfeito.\n", num);
    }

    return 0;
}
