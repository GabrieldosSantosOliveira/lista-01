#include<stdio.h>
 
int main(){
    const float PI = 3.14159;
    const float CUSTO_DO_ALUMINIO_POR_M2 = 100.0;
    float raio_lata, altura_lata;
    scanf("%f%f", &raio_lata, &altura_lata);
    float area_do_circulo = PI * (raio_lata * raio_lata);
    float area_lateral_do_cilindro = 2 * PI * raio_lata * altura_lata;
    float area_do_cilindro =  2 * area_do_circulo + area_lateral_do_cilindro;
    
    printf("O VALOR DO CUSTO E = %.2f\n", area_do_cilindro * CUSTO_DO_ALUMINIO_POR_M2);
    return 0;
}