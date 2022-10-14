#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    float b,c,toplam;
    printf("bu program sectiginiz islem ve iki sayi ile 1/a(+,-)1/b islemini yapar\n");

    printf("lutfen islem seciniz(+,-)\n");
    scanf("%c",&a);

    printf("iki sayi giriniz\n");
    scanf("%f%f",&b,&c);
    while((b==0)||(c==0))
    {
         printf("islem yapilamaz lutfen gecerli deger girin\n");
         printf("iki sayi giriniz\n");
         scanf("%d%d",&b,&c);
    }
    if (a=='+')
    {
        toplam=(1/b)+(1/c);
        printf("sonuc : %.3f",toplam);
    }
    else
    {
        toplam=1/b-1/c;
        printf("sonuc : %.3f",toplam);
    }
    getch();
    return 0;
}
