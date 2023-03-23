#include <stdio.h>
#include <stdlib.h>

void asknumber()
{
    int sayi;
    printf("Please Enter A Number:");
    scanf("%d", &sayi);
    if (sayi == 0)
    {
        exit(0);
    }
    else
    {
        asknumber();
    }
}

int main()
{
    asknumber();

    return 0;
}