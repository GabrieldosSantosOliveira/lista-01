#include <stdio.h>
#define QUANTIDADE_DE_SEGUNDOS_EM_UM_MINUTO 60
#define QUANTIDADE_DE_MINUTOS_EM_UMA_HORA 60
int main()
{
  int horas, minutos, segundos;
  scanf("%d%d%d", &horas, &minutos, &segundos);
  segundos += QUANTIDADE_DE_SEGUNDOS_EM_UM_MINUTO * minutos;
  segundos += QUANTIDADE_DE_MINUTOS_EM_UMA_HORA * QUANTIDADE_DE_SEGUNDOS_EM_UM_MINUTO * horas;
  printf("O TEMPO EM SEGUNDOS E = %d\n", segundos);
  return 0;
}