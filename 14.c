#include <stdio.h>
int main()
{
  int n1;
  scanf("%d", &n1);
  int terceiro_digito = n1 % 10;
  int segundo_digito = (n1 % 100) - terceiro_digito;
  int primeiro_digito = (n1 - terceiro_digito) - segundo_digito;
  int digito_de_controle = (primeiro_digito/ 100 + segundo_digito/10 * 3 + terceiro_digito * 5) % 7;
  n1 = (n1 * 10) + digito_de_controle;
  printf("O NOVO NUMERO E = %d\n", n1);
 
  return 0;
}