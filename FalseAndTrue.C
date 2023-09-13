#include <stdio.h>
#include <stdbool.h>

bool ehPrimo(int num) {
    if (num < 2) {
        return false; // Números menores que 2 não são primos
    }
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false; // Encontrou um divisor, não é primo
        }
    }
    
    return true; // Se nenhum divisor foi encontrado, é primo
}

int main() {
    int num;

    printf("Digite um número inteiro e positivo: ");
    scanf("%d", &num);

    if (ehPrimo(num)) {
        printf("%d é um número primo.\n", num);
    } else {
        printf("%d não é um número primo.\n", num);
    }

    return 0;
}
