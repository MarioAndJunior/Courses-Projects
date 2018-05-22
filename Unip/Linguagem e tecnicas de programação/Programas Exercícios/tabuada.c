#include<stdio.h>

int main() {
    int numero, i;
    printf("Escolha um numero inteiro:");
    scanf("%d", &numero);
    for(i = 1; i <= 10; i++) {
          printf("%2d x %2d = %3d\n", i, numero, i * numero);
          printf("\n");
          }
          system("pause");
    return 0;
}
