#include <stdio.h>
#include <stdlib.h>

int bolum(int divided, int divisor)
{
if(divisor==0){
    return 0;
}
else if (divided-divisor==0) 
{
    return 1;
}
else if(divided<divisor)
{
    return 0;
}
else
{
    return (1+bolum(divided-divisor,divisor));
}

}



int main()
{
int a,b;
printf("please enter the divided number:");
scanf("%d",&a);

printf("please enter the divisor number:");
scanf("%d",&b);

printf("result=%d\n",bolum(a,b));
printf("remaining number=%d", a- bolum(a,b)*b);

return 0;
}