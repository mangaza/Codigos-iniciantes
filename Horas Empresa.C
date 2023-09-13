#include <stdio.h>

void converterTempo(int segundos, int* horas, int* minutos, int* seg) {
    *horas = segundos / 3600;   // 1 hora = 3600 segundos
    segundos %= 3600;
    *minutos = segundos / 60;   // 1 minuto = 60 segundos
    *seg = segundos % 60;
}

int main() {
    int tempoEmSegundos, horas, minutos, segundos;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &tempoEmSegundos);

    converterTempo(tempoEmSegundos, &horas, &minutos, &segundos);

    printf("Tempo convertido: %d horas, %d minutos, %d segundos.\n", horas, minutos, segundos);

    return 0;
}
