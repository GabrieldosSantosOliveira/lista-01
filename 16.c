#include <stdio.h>
int main()
{
  int n1;
  scanf("%d", &n1);
  int terceira_casa = n1 % 10;
  int segunda_casa = (n1 % 100) - terceira_casa;
  int primeira_casa = n1 - terceira_casa - segunda_casa;
  printf("%d%d%d\n", terceira_casa, segunda_casa / 10, primeira_casa / 100);
  return 0;
}