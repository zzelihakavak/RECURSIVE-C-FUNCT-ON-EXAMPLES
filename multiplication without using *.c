#include <stdio.h>
#include <stdlib.h>

int carpim(int sayi1 , int sayi2){
    int sonuc;
    if (sayi2==1)
    {
       sonuc=sayi1;
    }
    else 
    {
        sonuc=sayi1+carpim(sayi1,sayi2-1);
    }


}






int main(){
    int a;
    int b;
    printf("enter your numbers:");
    scanf("%d%d",&a,&b);
    printf("%d multiply %d = %d",a,b,carpim(a,b));
}