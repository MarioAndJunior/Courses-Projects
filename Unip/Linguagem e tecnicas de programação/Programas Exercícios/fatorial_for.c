#include <stdio.h>

int main() {
    int fat, i, n;
    printf("Digite um numero inteiro \n");
    scanf("%d", &n);
    
    fat = 1;
    
    for(i = 1; i <= n; i++){
          fat = fat * i;
          }
    printf("O fatorial de " "%d" " e " "%d\n", n, fat);
    system("pause");
    return 0;
}
