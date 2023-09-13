
#include <stdio.h>
#include <math.h> // Inclua a biblioteca math para usar a constante M_PI

// Função para calcular o volume da esfera
double calcularVolumeEsfera(double raio) {
    return (4.0 / 3.0) * M_PI * pow(raio, 3);
}

int main() {
    double raio, volume;

    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);

    if (raio < 0) {
        printf("O raio deve ser não negativo.\n");
    } else {
        volume = calcularVolumeEsfera(raio);
        printf("O volume da esfera é: %.2lf\n", volume);
    }

    return 0;
}
