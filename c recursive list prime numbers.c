#include <stdio.h>
#include <stdlib.h>

int prime(int sayi,int i)
{

if (i==1)
{
    return 1;
}
else if (sayi%i==0){
    return 0;
}
else{
    prime(sayi,i-1);
}

}





int main()
{

    int n, i,control;
    printf("please enter a number:");
    scanf("%d", &n);

for (i=2; i<=n; i++)
{
control=prime(i,i/2);
if (control==1)
{
    printf("%d\n", i);
}
}

    return 0;
}