#include <stdio.h>

int main() 
{
    char a;
    double b[3];
    // char c = 'Z';

    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));
    // printf("%d bytes\n", sizeof(c));

    printf("%p\n", &a);
    printf("%p\n", &b);
    // printf("%p\n", &c);
    return 0;
}
