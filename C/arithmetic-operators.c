#include <stdio.h>

int main() {
 int a = 5;
 float b = 3.5;

 double c = a * ++b;
 printf("Answer: %.2f", c);
 return 0;
}