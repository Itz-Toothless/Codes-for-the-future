#include <stdio.h>
#include <ctype.h>

int main() {

 char unit;
 float temp;

 printf("What Unit do you want the Temperature Output to be?: "); // ! Asks for an Temperature unit (Options are: Celsius and Fahrenheit)
 scanf("%c", &unit);
 unit = toupper(unit);

 if(unit == 'C') {
   printf("Enter the Temperature in Celsius: "); // * Asks for the Temperature to be converted into the other Unit (in this Case: Fahrenheit)
   scanf("%f", &temp);
   temp = (temp * 9 / 5) + 32;
   printf("Temperature in Fahrenheit: %.1f", temp);
 }
 else if(unit == 'F') {
   printf("Enter the Temperature in Fahrenheit: "); // * Asks for the Temperature to be converted into the other Unit (in this Case: Celsius)
   scanf("%f", &temp);
   temp = ((temp - 32) *5) / 9;
   printf("Temperature in Fahrenheit: %.1f", temp);
 }
 else{
  printf("%c is not a valid Temperature type!", unit);
 }
return 0;
}