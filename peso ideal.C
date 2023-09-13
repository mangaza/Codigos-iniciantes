#include <stdio.h>

float calcularPesoIdeal(float altura, char sexo) {
    float peso_ideal;

    if (sexo == 'M' || sexo == 'm') {
        peso_ideal = 72.7 * altura - 58;
    } else if (sexo == 'F' || sexo == 'f') {
        peso_ideal = 62.1 * altura - 44.7;
    } else {
        printf("Sexo inválido. Use 'M' para masculino ou 'F' para feminino.\n");
        return -1; 
    }

    return peso_ideal;
}

int main() {
    float altura=0, peso_ideal=0;
    char sexo;

    printf("Informe o sexo (M/F): ");
    scanf(" %c", &sexo);

    printf("Informe a altura (em metros): ");
    scanf("%f", &altura);

    peso_ideal = calcularPesoIdeal(altura, sexo);

    if (peso_ideal != -1) {
        printf("O peso ideal é %.2f kg.\n", peso_ideal);
    }

    return 0;
}
