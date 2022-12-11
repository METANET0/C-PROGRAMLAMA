#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 2
typedef struct
{
    char ad[10];
    char soyad[10];
    int yas;
    int seviye;
}oyuncular;
typedef struct
{
    char ad[10];
    oyuncular oyuncu1;
    oyuncular oyuncu2;
}ekip;
void ekibiolustur(ekip *pencil)
{
       printf("ekibin adini giriniz : ");
       scanf("%s",pencil->ad);
       printf("oyuncu 1 :\n");
       oyuncuyuolustur(&pencil->oyuncu1);
       printf("oyuncu 2 :\n");
       oyuncuyuolustur(&pencil->oyuncu2);
}
void oyuncuyuolustur(oyuncular *book)
{
    printf("ismi giriniz : ");
    scanf("%s",book->ad);
    printf("soyadi giriniz : ");
    scanf("%s",book->soyad);
    printf("yasi giriniz : ");
    scanf("%d",&book->yas);
    printf("seviyeyi giriniz : ");
    scanf("%d",&book->seviye);
}
void yazdirekip(ekip *p,int a)
{
    printf("ekip %d=\n=======\n",a+1);
    printf("isim : %s\n-------\n",p->ad);
    printf("oyuncu 1:\n");
    yazdiroyuncu(&p->oyuncu1);
    printf("-------\n");
    printf("oyuncu 2:\n");
    yazdiroyuncu(&p->oyuncu2);
    printf("\n");
}
void yazdiroyuncu(oyuncular *water)
{
    printf("isim : %s\n",water->ad);
    printf("soyad : %s\n",water->soyad);
    printf("yas : %d\n",water->yas);
    printf("seviye : %d\n",water->seviye);
}

int main()
{
    int i,j;
    ekip baris[N];

    for(i=0;i<N;i++)
    {
        printf("ekip %d:\n",i+1);
        ekibiolustur(&baris[i]);
    }
     for(i=0;i<N;i++)
    {
        printf("\n");
        yazdirekip(&baris[i],i);
    }
    getch();
    return 0;
}
