
#include <stdio.h>

void troca_valor(int *num1, int *num2){
    int temp = *num1;
    *num1=*num2;
    *num2= temp;
}
int main() {
    int num1, num2;
    printf("Digite dois numeros separados por virgula:\n");
    scanf("%d,%d", &num1,&num2);
    
    troca_valor(&num1,&num2);
    
    printf ("num1: %d\nnum2: %d",num1,num2);
    return 0;
}