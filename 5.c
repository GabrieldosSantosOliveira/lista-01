#include<stdio.h>
 
int main(){
    float a,b,c,d;
    scanf("%f%f%f%f", &a,&b,&c,&d);
    float determinante = a*d - b*c;
    printf("O VALOR DO DETERMINANTE E = %0.2f\n", determinante);
    return 0;
}