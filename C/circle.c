#include <stdio.h>

int main() {
   const double PI = 3.14159;
   double radius;
   double circumference;
   double area;
   
   printf("Enter Radius of a Circle: ");
   scanf("%lf", &radius);

   circumference = 2 * PI * radius;
   area = PI * radius * radius;
   printf("Circumference: %lf\n", circumference);
   printf("Area: %lf", area);
   return 0;
}