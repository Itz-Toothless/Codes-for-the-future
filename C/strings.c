#include <stdio.h>
#include <string.h>

int main() {
    

    char string1[] = "Ohnezahn";
    char string2[] = "Dragon";


    // * strlwr(string1); Lowercases the provided String
    // * strupr(string1); Uppercases the provided String
    // * strcat(string1, string2); Appends string1 to string2
    // * strncat(string1, string2, 3); Appends string1 to string2 with given last argument
    // * strcpy(string1, string2); Copy string1 to string2
    // * strncpy(string1, string2, 3); copy n characters of string2 to string1
    // * strset(string1, '?'); sets all characters of a string to a given characters
    // * strnset(string1, 'x', 1); sets first n characters of a string to a given character
    // * strrev(string1); Reverses the String 
    // * strlen(string1); Prints the Length of given String
    // * strcmp(string1, string2); Compares the Strings based on all characters

    int result = strcmp(string1, string2);
    if(result == 0) {
        printf("The strings are the same");
    }
    else
    {
        printf("The strings are not the same!");
    }
    // printf("%d", result);
    return 0;

}