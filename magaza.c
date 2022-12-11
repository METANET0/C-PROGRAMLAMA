#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define G 2

struct isciler
{
    char adi[10];
    char soyadi[10];
    int yas;
};
struct urunler
{
  int referanskod;
  int fiyat;
};
struct magaza
{
    char ad[10];
    char sokak[100];
    char mahalle[100];
    int tel;
    int satis;
    struct isciler isci[2];
    struct urunler urun[2];
};
void magazayiolustur(struct magaza *b,int a)
{
    printf("magaza %d:\n",a);
    printf("isim : ");
    scanf("%s",b->ad);
    printf("sokak adi : ");
    scanf("%s",b->sokak);
    printf("mahalle adi: ");
    scanf("%s",b->mahalle);
    printf("telefon : ");
    scanf("%d",&b->tel);
    printf("satis tutari : ");
    scanf("%d",&b->satis);
    printf("\n");
    for(a=0;a<2;a++)
    {
        iscial(&b->isci[a],a+1);
    }
    printf("\n");
       for(a=0;a<2;a++)
    {
        urunal(&b->urun[a],a+1);
    }
    printf("\n");
}
void iscial(struct isciler *k,int a)
{
   printf("isci %d:\n",a);
   printf("isim :");
   scanf("%s",k->adi);
   printf("soyad :");
   scanf("%s",k->soyadi);
   printf("yas :");
   scanf("%d",&k->yas);
}
void urunal(struct urunler *x,int z)
{
    printf("urun %d:\n",z);
    printf("urunun referans kodu :");
    scanf("%d",&x->referanskod);
    printf("urunun fiyati :");
    scanf("%d",&x->fiyat);
}
void magazayibastir(struct magaza *t,int q)
{
    printf("\nmagaza %d:\n",q);
    printf("-----\n");
    printf("isim :%s\n",t->ad);
    printf("sokak adi :%s\n",t->sokak);
    printf("mahalle adi :%s\n",t->mahalle);
    printf("telefon :%d\n",t->tel);
    printf("satis miktari :%d\n\n",t->satis);
    for(q=0;q<G;q++)
    {
        printf("----\n");
        printf("isci %d:\n",q+1);
        iscibastir(&t->isci[q]);
    }
    printf("\n");
      for(q=0;q<G;q++)
    {
        printf("----\n");
        printf("urun %d:\n",q+1);
        urunbastir(&t->urun[q]);
    }
}
void iscibastir(struct isciler *a)
{
    printf("isim :%s\n",a->adi);
    printf("soyisim :%s\n",a->soyadi);
    printf("yasi :%d\n",a->yas);
}
void urunbastir(struct urunler *f)
{
    printf("fiyat :%d\n",f->fiyat);
    printf("referans kodu :%d\n",f->referanskod);
}
void yasli(struct magaza y,struct magaza p)
{
    int i,j,max1=y.isci[0].yas,max2=p.isci[0].yas;
     if((y.isci[1].yas)>(y.isci[1].yas))
      {
        max1=y.isci[1].yas;
      }
      if((p.isci[1].yas)>(p.isci[0].yas))
      {
        max2=p.isci[1].yas;
      }

      if(max2>max1)
      {

          printf("\n<en yasli isci %d yasindadir>\n",max2);
      }
      else
      {
          printf("\n<en yasli isci %d yasindadir>\n",max1);
      }
}
void ortalama(struct magaza p,int a)
{
    int i;
    float toplam=0;
    for(i=0;i<2;i++)
    {
        toplam+=p.urun[i].fiyat;
    }
    printf("\n<%d.magazanin ortalama urun fiyati : %.2f>\n",a+1,toplam/2);
}
void satisdegeri(struct magaza p,struct magaza b)
{
    if(p.satis>b.satis)
    {
        printf("\n<en fazla satis degerine sahip magaza 1.magazadir>\n");
    }
    else if(p.satis<b.satis)
    {
        printf("\n<en fazla satis degerine sahip magaza 2.magazadir>\n");
    }
    else
    {
        printf("\n<iki magazanin satis degeri esittir>\n");
    }
}
int main()
{
    struct magaza p[G];
    int i,j;
    for(i=0;i<G;i++)
    {
        magazayiolustur(&p[i],i+1);
    }
      for(i=0;i<G;i++)
    {
        magazayibastir(&p[i],i+1);
    }
    yasli(p[0],p[1]);
    ortalama(p[0],0);
    ortalama(p[1],1);
    satisdegeri(p[0],p[1]);
    getch();
    return 0;
}
