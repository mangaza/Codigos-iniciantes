#include <stdio.h>

void determinarCategoria(int idade, char *categoria) {
    if (idade >= 5 && idade <= 7) {
        *categoria = 'A';
    } else if (idade >= 8 && idade <= 10) {
        *categoria = 'B';
    } else if (idade >= 11 && idade <= 13) {
        *categoria = 'C';
    } else if (idade >= 14 && idade <= 17) {
        *categoria = 'D';
    } else if (idade >= 18){
        *categoria = 'E'; 
    } else {
        *categoria = 'F'; // Categoria indefinida
    }
    
}

int main() {
    int idade;
    char categoria;

    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);

    determinarCategoria(idade, &categoria);

    switch (categoria) {
        case 'A':
            printf("Categoria: Infantil A\n");
            break;
        case 'B':
            printf("Categoria: Infantil B\n");
            break;
        case 'C':
            printf("Categoria: Juvenil A\n");
            break;
        case 'D':
            printf("Categoria: Juvenil B\n");
            break;
        case 'E':
            printf("Categoria: Adulto\n");
            break;
        default:
            printf("Idade fora das categorias definidas.\n");
            break;
    }

    return 0;
}
