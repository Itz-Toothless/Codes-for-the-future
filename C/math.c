#include <stdio.h>
#include <math.h>

int main() {
 double r = sqrt(9);
 double s = pow(2, 4);
 int c = round(3.14);
 int d = ceil(3.16);
 int e = floor(3.21);
 int f = fabs(-100);
 double g = log(3);
 double h = sin(45);
 double i = cos(45);
 double j = tan(45);
 printf("Sqrt: %lf\n", r);
 printf("Pow: %lf\n", s);
 printf("Round: %d\n", c);
 printf("Ceil: %d\n", d);
 printf("Floor: %d\n", e);
 printf("Fabs: %d\n", f);
 printf("Log: %.2lf\n", g);
 printf("Sin: %.2lf\n", h);
 printf("Cos: %.2lf\n", i);
 printf("Tan: %.2lf\n", j);
 return 0;
}
