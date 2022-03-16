#include <sys/time.h>
#include <stdio.h>

int main()
{
    struct timeval tv;
    gettimeofday(&tv, NULL);
    printf("Seconds since January. 1st, 1970: %ld\n", tv.tv_sec);
    return 0;
}