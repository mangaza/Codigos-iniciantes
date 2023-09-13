#include <stdio.h>

char calcularConceito(float media) {
    char conceito;

    if (media >= 0.0 && media < 5.0) {
        conceito = 'D';
    } else if (media >= 5.0 && media < 7.0) {
        conceito = 'C';
    } else if (media >= 7.0 && media < 9.0) {
        conceito = 'B';
    } else if (media >= 9.0 && media <= 10.0) {
        conceito = 'A';
    } else {
        conceito = 'X'; // Valor inválido
    }

    return conceito;
}

int main() {
    float media;
    char conceito;

    printf("Digite a média final do aluno: ");
    scanf("%f", &media);

    conceito = calcularConceito(media);

    switch (conceito) {
        case 'A':
            printf("Conceito A - Excelente\n");
            break;
        case 'B':
            printf("Conceito B - Bom\n");
            break;
        case 'C':
            printf("Conceito C - Regular\n");
            break;
        case 'D':
            printf("Conceito D - Insuficiente\n");
            break;
        default:
            printf("Média inválida ou fora do intervalo de 0.0 a 10.0\n");
            break;
    }

    return 0;
}
