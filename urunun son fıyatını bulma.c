#include <stdio.h>
#include <stdlib.h>
#define kitapv 4.0
#define temelgidav 5.6
#define luksurunv 19.6
#define kitap 0
#define temelgida 1.0
#define luksurun 2
int main()
{
   //ürünün vergi dahil son fiyatýný bulan program ürün fiyatýný ve kodunu girdi olarak alýyoruz.
   int kod;
   float fiyat;
   printf("kitabin kodu : 0\n");
   printf("temel gidanin kodu : 1\n");
   printf("luks urunun kodu : 2 \n\n");
   printf("istedeginiz urunun kodunu giriniz : ");
   scanf("%d",&kod);
   printf("\nistediginiz urunun fiyatini giriniz : ");
   scanf("%f",&fiyat);
   printf("\n");
   switch(kod)
   {
   case 0:printf("vergi dahil son fiyat : %.2f",fiyat+kitapv*fiyat/100);
   break;
   case 1:printf("vergi dahil son fiyat : %.2f",fiyat+temelgidav*fiyat/100);
   break;
   case 2:printf("vergi dahil son fiyat : %.2f",fiyat+luksurunv*fiyat/100);
   break;
   default:printf("gecerli kod giriniz");
   }
   //bu programý if else ile aþaðýdaký gýbýde yapabýlýrýz.
   /*if(kod==0)
   {
       printf("vergi dahil son fiyat : %.2f",fiyat+temelgidav*fiyat/100);
   }
   else if(kod==1)
   {
       printf("vergi dahil son fiyat : %.2f",fiyat+temelgidav*fiyat/100);
   }
   else if(kod==2)
   {
       printf("vergi dahil son fiyat : %.2f",fiyat+luksurunv*fiyat/100);
   }
   else
   {
       printf("gecerli kod giriniz");
   }*/

    getch();
    return 0;
}
