/**
 * C program to return multiple value from a function using array.
 */

#include <stdio.h>

#define SIZE 10


int * getNEvenNumbers(const int N, int * numbers);


int main()
{
    int evenNumbers[SIZE];
    int i;


    getNEvenNumbers(SIZE, evenNumbers);


    printf("First %d even numbers are: \n", SIZE);
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", *(evenNumbers + i));
    }


    return 0;
}




int * getNEvenNumbers(const int N, int * numbers)
{
    int i;

    for (i = 0; i < N; i++)
    {
        // Calculate and store even number in numbers
        *(numbers + i) = 2 * (i + 1);
    }

    return numbers;
}
