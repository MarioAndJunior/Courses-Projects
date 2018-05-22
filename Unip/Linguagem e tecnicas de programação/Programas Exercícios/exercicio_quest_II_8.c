#include <stdio.h>

void main(){
int a = 15;
int b = 3;
int c, d;
b+=a;
c = b;
b = 2;
d = c / b;
printf("%d %d %d %d \n", a, b, c, d);
}
