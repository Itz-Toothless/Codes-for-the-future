#include <stdio.h>

int main() {
 float i[4] = {2.5, 3.5, 5.3, 7.2};
 printf("%.2f", i[0] + i[1] * i[2] - i[3]);
 return 0;
}