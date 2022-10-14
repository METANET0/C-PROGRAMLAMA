#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n,k,i;
    float toplam;
    printf("bu program girdiginiz sayinin 1+1/2+1/3+....1/n degerini hesaplamaya yarar\n\n");
    do
    {
        printf("bir n sayisi giriniz\n");
        scanf("%f",&n);
    }
    while(n<1);
    toplam=0;

    for(k=1;k<n;k++)
    {
        toplam=toplam+1/k;
        printf("1/%.0f+",k);
    }
    toplam=toplam+1/n;
    printf("1/%.0f=%.4f",n,toplam);
    getch();
    return 0;
}
