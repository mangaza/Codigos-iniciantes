#include <stdio.h>

int contarDivisores(int numero) 
{
    int contador = 0;  
    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            contador++; 
            printf("Os divisores seriam:%d\n",i);
        }
    }
    return contador; 
}

bool ehPerfeito(int num) 
{
    int somaDivisores = 0;

    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            somaDivisores += i;
        }
    }

    return (somaDivisores == num);
}

int main(){
int funcao;

printf("Digite um numero para escolher a funcao desejada\n 1 - Divisores e quantidade\n 2 - Numero perfeito\n\nDigite o numero:");
scanf("%d",&funcao);

   
    switch (funcao) {
            case 1:
                int n1, divisao;
                printf("Digite um numero para descobrir quais seus divisores: ");
                scanf("%d", &n1);
                    
                divisao= contarDivisores(n1);
                    
                printf("\nO numero %d tem %d divisores\n", n1, divisao);

                break;
            case 2:
                int num;

                printf("Digite um numero para saber se seria perfeito: ");
                scanf("%d", &num);

                if (ehPerfeito(num)) {
                    printf("%d e um numero perfeito.\n", num);
                } else {
                    printf("%d nao e um numero perfeito.\n", num);
                }
                break;   
    }
 
}