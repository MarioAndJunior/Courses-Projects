#include<stdio.h>
#include<stdlib.h>

int *acha_caractere(char *str, char c, int *pn){
    int i = 0, n = 0, *indices = 0;
    for(i = 0; str[i] != '\0'; i++){
          if(str[i] == c){
                    n++;
                    }
          }
          
    indices = (int *)malloc(n * sizeof(int));
    for(i = 0, n =0; str[i] != '\0'; i++){
          if(str[i] == c){
                    indices[n] = i;
                    n++;
                    }
          }
          *pn = n;
          return indices;
    }
    
int main(){
    int *indices = 0, n = 0, i;
    char *frase = "Universidade Paulista";
    indices = acha_caractere(frase, 'a', &n);
    for(i = 0; i < n; i++) {
          printf("%d", indices[i]);
          }
          system("pause");
          return 0;
          }
