#include <stdio.h>
#include <stdio.h>
int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return (fibonacci(n - 2) + fibonacci(n - 1));
    }
}

int main()
{
    int sayi, i;
    printf("How Many Numbers Will Be Used?:");
    scanf("%d", &sayi);

    for (i = 0; i < sayi; i++)
    {
        printf("%d\n", fibonacci(i));
    }

    return 0;
}