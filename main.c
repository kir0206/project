#include <stdio.h>
#include "library/mylib.h"

//void SelectionSort(int size, int array[]);
void Swap(int *a, int *b);
void Print(int array[], int c, int m, int size, int *check_sum, int number_of_series);
void CheckSum(int array[], int *check_sum, int size);
void Number_Of_Series(int array[], int size, int *number_of_series);

int main(int argc, char const *argv[])
{
    int a, b, size, min_number, m = 0, c = 0, check_sum = 0, number_of_series = 0;
    scanf("%d", &size);
    int array[size];
    Random(size, array);
    CheckSum(array, &check_sum, size);
    Print(array, c, m, size, &check_sum, number_of_series);
    for (int i = 0; i < size-1; i++)
    {
        min_number = i;
        m+=3;
        for (int j = i+1; j < size; j++)
        {
            c++;
            if (array[j] < array[min_number])
            {
                min_number = j;
            }
        }
        if (min_number != i)
        {
            Swap(&array[min_number], &array[i]);
        }
    }
    CheckSum(array, &check_sum, size);
    Number_Of_Series(array, size, &number_of_series);
    Print(array, c, m, size, &check_sum, number_of_series);
    return 0;
}

void Print(int array[], int c, int m, int size, int *check_sum, int number_of_series)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d %d %d %d %d\n", array[i], c, m, *check_sum, number_of_series);
    }
    (*check_sum) = 0;
}


void Swap(int *a, int *b)
{
    int d = *a;
    *a = *b;
    *b = d;
}

void CheckSum(int array[], int *check_sum, int size)
{
    for (int i = 0; i < size; i++)
    {
        (*check_sum) += array[i];
    }
    
}
void Number_Of_Series(int array[], int size, int *number_of_series)
{
    for (int i = 1; i < size; i++)
    {
        if (array[i-1] > array[i])
        {
            (*number_of_series)++;
        }
        
    }
    
}
/*
void SelectionSort(int size, int array[])
{
    while (NULL)
    {
    } 
}
*/
/*1. Разработать процедуры сортировки массива целых чисел методом
прямого выбора, методом пузырьковой сортировки и методом
шейкерной сортировки (язык программирования Паскаль или Си).
2. Правильность сортировки проверить путем подсчета контрольной
суммы и числа серий в массиве.
3. Во время сортировки предусмотреть подсчет количества пересылок
и сравнений (М и С), сравнить их с теоретическими оценками.
4. Составить таблицу следующего вида (данные получить
экспериментально) для n= 10, 50, 100, 200. (n – количество
элементов в массиве)
*/