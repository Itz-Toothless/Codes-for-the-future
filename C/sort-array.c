#include <stdio.h>

void sort(char array[], int size)
{
    for(int i = 0; i < size - 1; i++) 
    {
        for(int j = 0; j < size - 1; j++) 
        {
            if(array[j] > array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

void printarray(char array[], int size)
{
    for(int i = 0; i < size; i++) 
    {
        printf("%c\t", array[i]);
    }
}

int main()
{
    char array[] = {'F', 'B', 'C', 'E', 'A', 'H', 'G', 'I', 'J'};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array, size);
    printarray(array, size);
    return 0;
}