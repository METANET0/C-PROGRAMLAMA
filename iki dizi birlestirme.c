#include <stdio.h>
#include <stdlib.h>

void birlestirme(int eleman[],int eliman[],int a,int b)
{
    int i,toplam[a+b];
    for(i=0;i<=a-1;i++)
    {
        toplam[i]=eleman[i];
    }
    for(i=0;i<=b-1;i++)
    {
        toplam[i+a]=eliman[i];
    }
    printf("iki dizinin birlestirilmis hali;\n");
    for(i=0;i<=a+b-1;i++)
    {
        printf("%d ",toplam[i]);
    }
    getch();
}
int main()
{
    int sayi,i,sayi2,j;
    printf("birinci dizinin eleman sayisini giriniz\n");
    scanf("%d",&sayi);
    int eleman[sayi];
    for(i=0;i<sayi;i++)
    {
        printf("%d. sayiyi giriniz : ",i+1);
        scanf("%d",&eleman[i]);
    }
    printf("ikinci dizinin eleman sayisini giriniz\n");
    scanf("%d",&sayi2);
    int eliman[sayi2];
    for(j=0;j<sayi2;j++)
    {
        printf("%d. sayiyi giriniz : ",j+1);
        scanf("%d",&eliman[j]);
    }
    birlestirme(eleman,eliman,sayi,sayi2);
    return 0;
}
