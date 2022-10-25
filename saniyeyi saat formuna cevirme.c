#include <stdio.h>
#include <stdlib.h>

void saat(int deger)
{
    int saat,dakika,saniye;
    saat=deger/3600;
    dakika=(deger%3600)/60;
    saniye=(deger%3600)%60;
    printf("hh:mm:ss\n");
    printf("%d:%d:%d",saat,dakika,saniye);
   getch();
}
int main()
{
    int saniye;
    printf("lutfen saniye degerini giriniz\n");
    scanf("%d",&saniye);
    saat(saniye);
    return 0;
}
