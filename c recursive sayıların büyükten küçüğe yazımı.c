#include <stdio.h>
void fun(int sayi){
    if(sayi==0){
        printf("%d",sayi);
    }
    else {
        printf("%d\n",sayi);
        fun(sayi-1);
    }
}


int main(){
    int n;
    printf("bir sayi giriniz:");
    scanf("%d",&n);
    fun(n);
}