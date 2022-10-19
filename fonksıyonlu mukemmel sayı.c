#include <stdio.h>
#include <stdlib.h>
int muk(int a)
{
    int i,toplam=0;

    for(i=1;i<=a/2;i++)
    {
        if(a%i==0)
        {
            toplam=toplam+i;
        }
    }
    if(a==toplam)
    {
        return 1;
    }
    else if(a!=toplam)
    {
        return 0;
    }
}

int main()
{
    int a,b;
    printf("mukemmel sayi olup olmadigini merak ettiginiz sayiyi giriniz\n");
    scanf("%d",&a);
    b=muk(a);
    if(b==1)
    {
        printf("mukemmel sayidir\n");
    }
    else if(b==0)
    {
        printf("mukemmel sayi degildir\n");
    }
    getch();
    return 0;
}
