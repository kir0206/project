#include <stdio.h>
#include "library/mylib.h"

//void SelectionSort(int size, int array[]);
void Swap(int *a, int *b);
void Print(int array[], int *c, int *m, int size, int *check_sum, int *number_of_series);
void CheckSum(int array[], int *check_sum, int size);
void Number_Of_Series(int array[], int size, int *number_of_series);
void SelectionSort(int array[], int size, int *min_number, int *c, int *m);
void BubbleSort(int array[], int size, int *c, int *m);
void BeforeSortAlg(int size, int *m, int *c, int *check_sum, int *number_of_series, int array[]);
void AfterSortAlg(int size, int *m, int *c, int *check_sum, int *number_of_series, int array[]);

int main(int argc, char const *argv[])
{
    int size, min_number, m = 0, c = 0, check_sum = 0, number_of_series = 0;
    scanf("%d", &size);
    int array[size];
    BeforeSortAlg(size, &m, &c, &check_sum, &number_of_series, array);
    SelectionSort(array, size, &min_number, &c, &m);
    AfterSortAlg(size, &m, &c, &check_sum, &number_of_series, array);
    /*Random(size, array);
    CheckSum(array, &check_sum, size);
    Number_Of_Series(array, size, &number_of_series);
    Print(array, &c, &m, size, &check_sum, &number_of_series);
    BubbleSort(array, size, &c, &m);
    CheckSum(array, &check_sum, size);
    Number_Of_Series(array, size, &number_of_series);
    Print(array, &c, &m, size, &check_sum, &number_of_series);*/
    return 0;
}

void BeforeSortAlg(int size, int *m, int *c, int *check_sum, int *number_of_series, int array[])
{
    Random(size, array);
    CheckSum(array, &(*check_sum), size);
    Number_Of_Series(array, size, &(*number_of_series));
    Print(array, c, &(*m), size, &(*check_sum), &(*number_of_series));
}

void AfterSortAlg(int size, int *m, int *c, int *check_sum, int *number_of_series, int array[])
{
    CheckSum(array, &(*check_sum), size);
    Number_Of_Series(array, size, &(*number_of_series));
    Print(array, c, &(*m), size, &(*check_sum), &(*number_of_series));
}

void BubbleSort(int array[], int size, int *c, int *m)
{
    for (int i = 0; i < size -1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            (*c)++;
            if (array[j] > array[j+1])
            {
                (*m)++;
                Swap(&array[j], &array[j+1]);
            }            
        }        
    }    
}

void SelectionSort(int array[], int size, int *min_number, int *c, int *m)
{
    for (int i = 0; i < size-1; i++)
    {
        *min_number = i;
        (*m)+=3;
        for (int j = i+1; j < size; j++)
        {
            (*c)++;
            if (array[j] < array[*min_number])
            {
                *min_number = j;
            }
        }
        if (*min_number != i)
        {
            Swap(&array[*min_number], &array[i]);
        }
    }
}

void Print(int array[], int *c, int *m, int size, int *check_sum, int *number_of_series)
{
    for (int i = 0; i < size; i++)
    {
        printf("%3d %3d %3d %3d %3d\n", array[i], *c, *m, *check_sum, *number_of_series);
    }
    *check_sum  = *c = *m = *number_of_series = 0;
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