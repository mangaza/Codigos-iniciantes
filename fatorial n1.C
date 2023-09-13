#include <stdio.h>

int fat(int a) {
    int fatorial = 1;
    for (int i = 1; i <= a; i++) {
        fatorial = fatorial * i;
    }
    return fatorial;
}

int main() {
    int n1, fatorial;
    printf("Digite um número: ");
    scanf("%d", &n1);
    
    fatorial = fat(n1);
    
    printf("%d! = %d\n", n1, fatorial);

    return 0;
}