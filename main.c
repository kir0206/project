#include <stdio.h>
#include "library/mylib.h"

int main(int argc, char const *argv[])
{
    int numbers;
    scanf("%d", &numbers);
    int array[numbers];
    Random(numbers, array);
    for (int i = 0; i < numbers; i++)
    {
        printf("%d\n", array[i]);
    }
    Sort(numbers, array);
    for (int i = 0; i < numbers; i++)
    {
        printf("%d\n", array[i]);
    }
    return 0;
}
