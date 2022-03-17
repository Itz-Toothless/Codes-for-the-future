#include <stdio.h>

int main() {
 int i = 25;


 // ! i+=2; (used for Addition)
 // ! i-=2; (used for subtraction)
 // ! i*=2; (used for Multiplying)
 // ! i/=2; (used for Division)
 // ! i%=2; (used for Modulus)

 double absolute_result = i %= 2;
 printf("%lf", absolute_result);
 return 0;
}