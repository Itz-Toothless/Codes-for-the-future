#include <stdio.h>
#include <stdbool.h>

int main() {
/*
Logical Operator && (AND) checks if two conditions are true
  float temp = 25;
  bool sunny = false;

  if(temp >= 0 && temp <= 30 && sunny) {
   printf("The weather is good");
  }
  else{
   printf("The weather is bad!");
  }
*/


/* Logical Operator || (OR) checks if at least one condition is true
  float temp = -10;
  bool sunny = false;

  if(temp >= 0 || sunny) {
   printf("The weather is good");
  }
  else{
   printf("The weather is bad!");
  }
*/
 // Logical Operator ! (NOT) reverses the state of an Condition
  bool sunny = false;
  if(!sunny){
   printf("It's cloudy outside");
  }
  else{
   printf("It's sunny outside");
  }
  return 0;
}
