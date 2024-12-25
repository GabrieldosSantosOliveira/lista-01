#include <stdio.h>
#define UMA_POLEGADA_EM_MILIMETROS 25.4
int main()
{
  float fahrenheit, polegadas;
  scanf("%f%f", &fahrenheit, &polegadas);
  float celsius = 5 * (fahrenheit - 32) / 9;
  float milimitros = polegadas * UMA_POLEGADA_EM_MILIMETROS;
  printf("O VALOR EM CELSIUS = %.2f\n", celsius);
  printf("A QUANTIDADE DE CHUVA E = %.2f\n", milimitros);
  return 0;
}