#include <stdio.h>
int sayiTopla(int n);
int main() {
    int num;
    printf("Sayı Gir: ");
    scanf("%d", &num);
    printf("Toplam = %d", sayiTopla(num));
    return 0;
}
 
int sayiTopla(int n) {
    if (n != 0)
        return n + sayiTopla(n - 1);
    else
        return n;
}
 
