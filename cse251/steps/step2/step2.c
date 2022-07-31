#include <math.h>
#include <stdio.h>

#define PI 3.1415926

int main() {

  double c, l, wc;
  printf("Input Capacitance (microfarads):");
  scanf("%lf", &c);
  printf("Input Inductance (millihenrys):");
  scanf("%lf", &l);
  wc = 1 / (2 * PI * sqrt((l / 1000.0) * (c / 1000000.0)));
  printf("Resonant Frequency is %.3f", wc);
  return 0;
}