#include <stdio.h>
int main()
{
  int n1;
  int notas_de_100 = 0;
  int notas_de_50 = 0;
  int notas_de_10 = 0;
  int notas_de_1 = 0;
  scanf("%d", &n1);
  notas_de_100 = n1 / 100;
  n1 = n1 % 100;
  notas_de_50 = n1 / 50;
  n1 = n1 % 50;
  notas_de_10 = n1 / 10;
  n1 = n1 % 10;
  notas_de_1 = n1 / 1;
  n1 = n1 % 1;
 
  printf("NOTAS DE 100 = %d\n", notas_de_100);
  printf("NOTAS DE 50 = %d\n", notas_de_50);
  printf("NOTAS DE 10 = %d\n", notas_de_10);
  printf("MOEDAS DE 1 = %d\n", notas_de_1);
 
  return 0;
}