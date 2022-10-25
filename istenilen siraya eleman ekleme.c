#include <stdio.h>
#include <stdlib.h>

void ekleyici(int Sayilar[],int ElemanSayisi,int Sira,int Deger)
{
    if(Sira<=ElemanSayisi+1)
    {
        int i;
    for(i=ElemanSayisi;i>=Sira-1;i--)
    {
        Sayilar[i+1]=Sayilar[i];
    }
    Sayilar[Sira-1]=Deger;
    printf("sayinizin eklenmis hali\n");
    for(i=0;i<=ElemanSayisi;i++)
    {
        printf("%d\n",Sayilar[i]);
    }
    }
    else
    {
        printf("gecerli sira giriniz ");
    }

    getch();
}
//bu þekildede yapabilirizi
/*void ekleyici(int sayilar[],int eleman,int sirasi,int sayi)
{
    int i;

      for(i=0;i<sayi;i++)
    {
       if(sirasi==i)
       {
           printf("%d\n",sayi);
       }
        printf("%d\n",sayilar[i]);
    }
}*/
int main()
{
    int i,sayi,sira,ekleme;
    printf("kac adet sayi uretilecek : ");
    scanf("%d",&sayi);
    int dizi[sayi];
    srand(time(0));
    for(i=0;i<sayi;i++)
    {
        dizi[i]=rand()%100;
        printf("%d\n",dizi[i]);
    }
    printf("hangi siraya eleman eklenecek : ");
    scanf("%d",&sira);
    printf("eklenecek sayiyi giriniz : ");
    scanf("%d",&ekleme);
    ekleyici(dizi,sayi,sira,ekleme);
    return 0;
}
