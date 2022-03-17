#include <stdio.h>
int main() {

 int eingabe;
 printf("Bitte gebe einen Buchstaben ein: ");
 eingabe = getchar();
 eingabe++;
 printf("Ausgabe: %c", eingabe);
 return 0;
}