

#include <stdio.h>

int contarDivisores(int numero) {
    int contador = 0;  
    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            contador++; 
            printf("Os divisores seriam:%d\n",i);
        }
    }
    return contador; 
}

int main() {
    int n1, divisao;
    printf("Digite um numero: ");
    scanf("%d", &n1);
    
    divisao= contarDivisores(n1);
    
    printf("%d = %d\n", n1, divisao);

    return 0;
}