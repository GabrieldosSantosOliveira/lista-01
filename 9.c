#include <stdio.h>
#include <math.h>
int main()
{
  float valor;
  scanf("%f", &valor);
 
  int first_round = (valor + 0.05) * 10.0;
  int second_round = (valor + 0.005) * 100.0;
  int third_round = (valor + 0.0005) * 1000.0;
  float x1 = first_round / 10.0;
  float x2 = second_round / 100.0;
  float x3 = third_round / 1000.0;
 
  printf("%.6f\n", x1);
  printf("%.6f\n", x2);
  printf("%.6f\n", x3);
 
  return 0;
}