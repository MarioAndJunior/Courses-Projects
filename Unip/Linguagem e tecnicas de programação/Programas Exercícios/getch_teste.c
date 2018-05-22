#include<stdio.h>
#include<conio.h>
int main(){
    int c,d;
    printf("\n Pressione uma tecla ou combinacao de teclas:");
    printf("\n Pressione [esc] para terminar! \n");
    
    do{
               c = getch();
               if(c ==0){
                    printf("%3d %3d codigo extendido \n", c, d);
                    }
                    else{
                         printf("%3d      codigo normal \n", c);
                         };
    }while(c != 27);
    system("pause");
    return 0;
}
