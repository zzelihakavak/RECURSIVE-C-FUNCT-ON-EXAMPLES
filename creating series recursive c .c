#include <stdio.h>
#include <stdlib.h>

void fun(int firstvalue, int finalvalue, int increase)
{

    if (firstvalue <= finalvalue)
    {
        printf("%d\n", firstvalue);
        fun(firstvalue + increase, finalvalue, increase);
    }
}

int main()
{

    int firstvalue, finalvalue, increase;
    printf("Please Enter First Value:");
    scanf("%d", &firstvalue);

    printf("Please Enter Final Value:");
    scanf("%d", &finalvalue);

    printf("Please Enter Increment Value:");
    scanf("%d", &increase);

    fun(firstvalue, finalvalue, increase);

    return 0;
}