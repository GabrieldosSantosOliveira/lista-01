#include<stdio.h>
 
int main(){
    double salario, quantidade_de_kw_gastos;
    scanf("%lf%lf", &salario, &quantidade_de_kw_gastos);
    double valor_do_kw = (salario *0.7) / 100;
    printf("Custo por kW: R$ %.2lf\n", valor_do_kw);
    printf("Custo do consumo: R$ %.2lf\n", valor_do_kw * quantidade_de_kw_gastos);
    printf("Custo com desconto: R$ %.2lf\n", (valor_do_kw * quantidade_de_kw_gastos) * 0.9);
    return 0;
}