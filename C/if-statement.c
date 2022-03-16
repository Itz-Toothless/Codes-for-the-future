#include <stdio.h>

int main() {
 int age;

 printf("Enter your Age: ");
 scanf("%i", &age);

 if (age < 18) {
  printf("You cannot do that! You are too young!");
 }
 else if (age == 0) {
  printf("You can't sign up since you just got born!");
 }
 else if (age < 0) {
  printf("Nice try, but you cannot fool me!");
 }
 else{
  printf("Welcome home!");
 }
 return 0;
}
