#include <stdio.h>
#include <stdlib.h>

int star(int limit)
{
    int i;
    if (limit == 0)
    {
        return 0;
    }
    else
    {
        for (i = 0; i < limit; i++)
        {
            printf(" *");
        }
        printf("\n");
        star(limit - 1);
    }
} 

int main()
{
    int top;
    printf("Please Enter The Upper Limit Of Stars:\n");
    scanf("%d", &top);
    printf("\n");
    star(top);

    return 0;
}