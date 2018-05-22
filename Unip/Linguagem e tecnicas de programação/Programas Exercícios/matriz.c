#include<stdio.h>

int main(){
    int lin, col, tab;
    int mat[3][3], mat1[3][3];
    for(lin=0;lin<3;lin++){
                           for(col=0;col<3;col++){
                                                  printf("Digite o elemento da linha %d, coluna %d da matriz: ", lin+1,col+1);
                                                  scanf("%d", &mat[lin][col]);
                                                  }
                           }
    printf("Matriz original\n");
    for(lin=0;lin<=2;lin++){
                            for(col=0;col<3;col++){
                                                   printf("%d\t", mat[lin][col]);
                                                   }
                            printf("\n\n");
                            }
    
    for(lin=0;lin<=2;lin++){
                            for(col=0;col<3;col++){
                                                   mat1[lin][col] = (mat[lin][col])*2;
                                                   }
                            }
    
    printf("Matriz multiplicada\n");
    for(lin=0;lin<=2;lin++){
                            for(col=0;col<3;col++){
                                                   printf("%d\t",mat1[lin][col]);
                                                   }
                            printf("\n\n");
                            }             
    printf("\n\n");
    system("pause");
    return 0;
}          
