#include<stdio.h>
int mult(int x, int y){
    if(y == 1){
         return(x);
         }
    else{
         return(x + mult(x, y-1));
         }
    }
         
    int main(){
        printf("\n %d x %d = %d", 2, 3, mult(2,3));
        system("pause");
        return 0;
        }
