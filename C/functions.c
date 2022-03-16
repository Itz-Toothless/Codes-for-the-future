#include <stdio.h>

void hello(char x[], int y) {
 printf("Happy Birthday %s\n", x);
 printf("You are now %d years old!", y);
}

int main() {
 char name[] = "Ohnezahn";
 int age = 19;

 hello(name, age);
 return 0;
}