#include<stdio.h>

int main() {
    float t[3];
    int i;
    float soma, media;
    soma = 0;
    for(i=0;i<=2;i++) {
                      printf("Digite a temperatura %d: ",i);
                      scanf("%f", &t[i]);
                      soma = soma+t[i];
                      }
    media= soma / 3;
    printf("\n Media das temperaturas %10.2f \n", media);
    for(i=0;i<=2;i++){
                      printf("diferenca %d eh %10.2f \n",i, media-t[i], i);
                      }
    system("pause");
    return 0;
}
                      
                      
