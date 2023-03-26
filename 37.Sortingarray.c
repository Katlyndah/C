#include <stdio.h>

//Program to sort the elements of an array
//Bubble sort

void sort(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (array[j] > array[j + 1]) // switch greater to lesser for decending order
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}

int main()
{
    int array[] = {2, 7, 0, 1, 3, 4, 8, 5, 6, 9};
    //char array[] = {'F','A', 'D', 'E'}
    //change int to char and %d to %c
    int size = sizeof(array) / sizeof(array[0]);

    sort(array, size);
    printArray(array, size);
    return 0;
}