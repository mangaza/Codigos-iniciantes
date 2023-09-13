#include <stdio.h>

void calcularMedia(float nota1, float nota2, float nota3, char tipoMedia, float *media) {
    if (tipoMedia == 'A' || tipoMedia == 'a') {
        *media = (nota1 + nota2 + nota3) / 3.0; // Média aritmética
    } else if (tipoMedia == 'P' || tipoMedia == 'p') {
        *media = (5 * nota1 + 3 * nota2 + 2 * nota3) / 10.0; // Média ponderada
    } else {
        printf("Tipo de média inválido. Use 'A' para média aritmética ou 'P' para média ponderada.\n");
        *media = -1; // Valor inválido, retorna -1 para indicar erro
    }
}

int main() {
    float nota1, nota2, nota3, media;
    char tipoMedia;

    printf("Digite as três notas do aluno: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    printf("Digite 'A' para média aritmética ou 'P' para média ponderada: ");
    scanf(" %c", &tipoMedia);

    calcularMedia(nota1, nota2, nota3, tipoMedia, &media);

    if (media != -1) {
        printf("A média do aluno é: %.2f\n", media);
    }

    return 0;
}
