#include<stdio.h>
int main(){
    int lin, col, cont=0, mat[4][4];
    for(lin=0; lin<=3;lin++){
               for(col=0;col<=3;col++){
                                       mat[lin][col] = cont++;
                                       }
               }
    printf("Matriz \n\n");
    for(lin=0;lin<=3;lin++){
                            for(col=0;col<=3;col++){
                                                    printf("%d\t", mat[lin][col]);
                                                    }
                                                    printf("\n\n");
                            }
                            
    printf("\n\nDiagonal Principal\n\n");
    for(lin=0;lin<=3;lin++){
                            printf("%d\t", mat[lin][lin]);
                            }
    printf("\n\n");
    system("pause");
    return 0;
}
