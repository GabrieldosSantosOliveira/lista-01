#include <stdio.h>

int main()
{
  float a, b, c, d, e, f;
  scanf("%f%f%f%f%f%f", &a, &b, &c, &d, &e, &f);
  float y = (f - ((c / a) * d)) / ((-b * d / a) + e);
  float x = (c - b * y) / a;
  printf("O VALOR DE X E = %.2f\n", x);
  printf("O VALOR DE Y E = %.2f\n", y);
  return 0;
}