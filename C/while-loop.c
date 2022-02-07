#include <stdio.h>

int main()
{
 
 int i = 0;
 while (i <= 100) // Lässt die Variable "i", welche einen Integer darstellt, den Wert 100 nicht übersteigen. 
 {
  printf("Zahl: %i\n", i); // Gibt die Zahl aus, an dieser sich i jetzt befindet.
  i++; // Addiert zu i 1 dazu, bis die 100 erreicht wurde
 }
 return 0; // Wenn i die Zahl 100 erreicht hat, wird als return der Wert 0 ausgegeben, welcher bedeutet, dass das Programm ordnungsgemäß und erwartet ausgeführt wurde
}
