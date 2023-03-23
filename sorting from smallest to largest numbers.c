#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fun(int A[], int height)
{
    int g, i;
    if (height > 0)
    {
        for (i = 0; i < height; i++)
        {
            if (A[i] > A[i + 1])
            {
                g = A[i + 1];
                A[i + 1] = A[i];
                A[i] = g;
            }
        }
        fun(A, height - 1);
    }
}

int main()
{
    int number;
    int i;

    printf("How Many Numbers Produced?:");
    scanf("%d", &number);

    int series[number];
    srand(time(0));

    for (i = 0; i < number; i++)
    {
        series[i] = rand() % 100;
        printf("%d\n", series[i]);
    }
    fun(series, number - 1);
    printf("\n\n");
    for (i = 0; i < number; i++)
    {
        printf("%4d", series[i]);
    }

    return 0;
}