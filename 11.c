#include <stdio.h>
int main()
{
  float preco_de_fabrica_do_carro, percentual_distribuidor, percentual_de_impostos;
  scanf("%f%f%f", &preco_de_fabrica_do_carro, &percentual_distribuidor, &percentual_de_impostos);
  float impostos = preco_de_fabrica_do_carro * (percentual_de_impostos / 100);
  float distribuidor = preco_de_fabrica_do_carro * (percentual_distribuidor / 100);
 
  float preco_final = preco_de_fabrica_do_carro + impostos + distribuidor;
  printf("O VALOR DO CARRO E = %.2f\n", preco_final);
  return 0;
}