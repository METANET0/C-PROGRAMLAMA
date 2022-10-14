#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    float x,toplam;
    printf("bu program girdiginiz pozitif n sayisi ile bir reel sayi x in 1/x^2+3/x^4.. degerini hesaplar\n\n");
    do
    {
    printf("bir pozitif n sayisi giriniz : ");
    scanf("\n%d",&n);
    }
    while(n<=0);

    printf("bir reel x sayisi giriniz : ");
    scanf("\n%f",&x);

    toplam=0;
    for(i=1;i<=2*n-1;i+=2)
   {
       toplam +=i/pow(x,i+1);
   }
   printf("seri toplami = %f",toplam);
   getch();
    return 0;
}
