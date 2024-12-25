#include <stdio.h>
#include <math.h>
int main()
{
  float altura_da_piramide, aresta_do_hexagono;
  scanf("%f%f", &altura_da_piramide, &aresta_do_hexagono);
  float area_do_hexagono = (3 * aresta_do_hexagono * aresta_do_hexagono * sqrt(3)) / 2;
  float volume_da_piramide = (1 * (area_do_hexagono * altura_da_piramide))/3;
  printf("O VOLUME DA PIRAMIDE E = %.2f METROS CUBICOS\n", volume_da_piramide);
  return 0;
}