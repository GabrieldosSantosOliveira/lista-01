#include <stdio.h>
int main()
{
  int n1;
  scanf("%d", &n1);
  if (n1 < 0 || n1 > 255)
  {
    printf("Numero invalido!\n");
    return 0;
  }
 
  int d8, d7, d6, d5, d4, d3, d2, d1;
 
  d8 = n1 % 2;
  n1 = n1 / 2;
  d7 = n1 % 2;
  n1 = n1 / 2;
  d6 = n1 % 2;
  n1 = n1 / 2;
  d5 = n1 % 2;
  n1 = n1 / 2;
  d4 = n1 % 2;
  n1 = n1 / 2;
  d3 = n1 % 2;
  n1 = n1 / 2;
  d2 = n1 % 2;
  n1 = n1 / 2;
  d1 = n1 % 2;
  n1 = n1 / 2;
  printf("%d%d%d%d%d%d%d%d\n", d1, d2, d3, d4, d5, d6, d7, d8);
 
  return 0;
}