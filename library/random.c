#include <stdlib.h>
#include <time.h>
void Random(int numbers, int array[])
{
    srand(time(NULL));
    for (int i = 0; i < numbers; i++)
    {
        array[i] = rand() % 101;
    }   
}   
