#include <stdio.h>
#include <stdlib.h>


int power(int n)
{
int  value;  
if(n==0)
{
    value=1;
}
else
{
     value=2*power(n-1);

}

printf("%d\n",value);
return value;
}


int main()
{


int number;
printf("Please Enter A Number:\n");
scanf("%d",&number);
printf("Powers Of 2 Up To %d\n",number);
power(number);





    return 0;
}