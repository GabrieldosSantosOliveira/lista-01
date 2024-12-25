#include <stdio.h>
#include <math.h>
int main()
{
  double massa_aviao, aceleracao_aviao, tempo_decolagem;
  scanf("%lf%lf%lf", &massa_aviao, &aceleracao_aviao, &tempo_decolagem);
  double v = aceleracao_aviao * tempo_decolagem;
  double s = (aceleracao_aviao * pow(tempo_decolagem, 2)) / 2;
  double w = (massa_aviao * 1000 * pow(v, 2)) / 2;
  printf("VELOCIDADE = %.2lf\n", v * 3.6);
  printf("ESPACO PERCORRIDO = %.2lf\n", s);
  printf("TRABALHO REALIZADO = %.2lf\n", w);
  return 0;
}