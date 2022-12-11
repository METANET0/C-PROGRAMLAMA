#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int sifre,yas;
    char ad[10],soyad[10],cinsiyet[10];
    float maas;
}personel;
int main()
{
    int n,i,j;
    int gecici;
    printf("kac adet personel girilicek\n");
    scanf("%d",&n);
    personel kisi[n];
    for(i=0;i<n;i++)
    {
         printf("%d. kisinin adini giriniz:",i+1);
         scanf("%s",&kisi[i].ad);
         printf("kisinin soyadini giriniz:");
         scanf("%s",&kisi[i].soyad);
         printf("kisinin cinsiyetini giriniz:");
         scanf("%s",&kisi[i].cinsiyet);
         printf("kisinin yasini giriniz:");
         scanf("%d",&kisi[i].yas);
         printf("kisinin maasini giriniz:");
         scanf("%f",&kisi[i].maas);
         printf("kisinin sifresini giriniz:");
         scanf(" %d",&kisi[i].sifre);
    }
     personel t;
    for(i=0;i<n-1;i++)
    {
      for(j=i+1;j<n;j++)
      {
         if(strcmp(kisi[i].ad,kisi[j].ad)>0)
        {
         t=kisi[i];
         kisi[i]=kisi[j];
         kisi[j]=t;
        }
      }
    }
    for(i=0;i<n;i++)
    {
        printf("%d.kisi bilgileri;\n",i+1);
        printf("ad:%s\n",kisi[i].ad);
        printf("soyad:%s\n",kisi[i].soyad);
        printf("cinsiyet:%s\n",kisi[i].cinsiyet);
        printf("yas:%d\n",kisi[i].yas);
        printf("maas:%.2f\n",kisi[i].maas);
        printf("sifre:%d\n\n",kisi[i].sifre);
    }
    getch();
    return 0;
}
