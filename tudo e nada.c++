#include <stdio.h>
#include <iostream>
#include <locale>





int fatorial(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int numeroDivisores(int valor) {
    int contador = 0;
    for (int i = 1; i <= valor; i++) {
        if (valor % i == 0) {
            contador++;
        }
    }
    return contador;
}

int somatorio(int valor) {
    int soma = 0;
    for (int i = 1; i <= valor; i++) {
        soma += i;
    }
    return soma;
}

float calculaS1(int N) {
    float S = 0.0;
    for (int i = 1; i <= N; i++) {
        S += 1.0 / i;
    }
    return S;
}

float calculaS2(int N) {
    float S = 0.0;
    for (int i = 0; i <= N; i++) {
        S += 1.0 / fatorial(i);
    }
    return S;
}

float calculaS3(int N) {
    float S = 0.0;
    for (int i = 1; i <= N; i++) {
        S += (i * i + 1.0) / (i + 3.0);
    }
    return S;
}

double cosseno(double x) {
    double resultado = 1.0;
    double termo = 1.0;
    int sinal = -1;
    for (int i = 2; i <= 40; i += 2) {
        termo *= (x * x) / ((i - 1) * i);
        resultado += sinal * termo;
        sinal *= -1;
    }
    return resultado;
}

double potencia(int x, int z) {
    double resultado = 1.0;
    for (int i = 0; i < z; i++) {
        resultado *= x;
    }
    return resultado;
}

int main() {
    std::setlocale(LC_ALL, "");

    printf("Escolha è uma funcao (21-27):\n");
    printf("21 - Numero de Divisores\n");
    printf("22 - Somatorio\n");
    printf("23 - S = 1 + 1/2 + 1/3 + 1/4 + 1/5 + 1/N\n");
    printf("24 - S = 1 + 1/1! + 1/2! + 1/3! + 1 /N!\n");
    printf("25 - S = 2/4 + 5/5 + 10/6 + 17/7 + 26/8 + ...\n");
    printf("26 - cosseno(x) = 1 - x^2 + x^4 - x^6 + ....\n");
    printf("27 - X elevado a Z\n");

    int escolha;
    printf("Digite um numero:");
    scanf("%d", &escolha);

    switch (escolha) {
        case 21: {
            int valor;
            printf("Digite um valor inteiro e positivo: ");
            scanf("%d", &valor);
            printf("O número de divisores de %d é: %d\n", valor, numeroDivisores(valor));
            break;
        }
        case 22: {
            int valor;
            printf("Digite um valor inteiro e positivo: ");
            scanf("%d", &valor);
            printf("O somatório de %d é: %d\n", valor, somatorio(valor));
            break;
        }
        case 23: {
            int N;
            printf("Digite um valor inteiro e positivo N: ");
            scanf("%d", &N);
            printf("O valor de S1 para N=%d é: %.2f\n", N, calculaS1(N));
            break;
        }
        case 24: {
            int N;
            printf("Digite um valor inteiro e positivo N: ");
            scanf("%d", &N);
            printf("O valor de S2 para N=%d é: %.2f\n", N, calculaS2(N));
            break;
        }
        case 25: {
            int N;
            printf("Digite um valor inteiro e positivo N: ");
            scanf("%d", &N);
            printf("O valor de S3 para N=%d é: %.2f\n", N, calculaS3(N));
            break;
        }
        case 26: {
            double x;
            printf("Digite um valor para x: ");
            scanf("%lf", &x);
            printf("O cosseno(%lf) é: %.4f\n", x, cosseno(x));
            break;
        }
        case 27: {
            int x, z;
            printf("Digite os valores para x e z separados por espaço: ");
            scanf("%d %d", &x, &z);
            printf("%d elevado a %d é: %.2f\n", x, z, potencia(x, z));
            break;
        }
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}
