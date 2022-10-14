#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b;
    printf("3 dakikaya kadar olan konusmaniz tarifeye dahildir ve 0.25 TL ile ucretlendirilir.3 dakikanin uzerindeki\n");
    printf("kullanimlar icin her dakika basina 0.08 tl ucretlendirilir.\n\n");
    b=0,25;
    do
    {
    printf("kac dakika konustugunuzu giriniz\n");
    scanf("%f",&a);
    }
   while (a<0);
    if(a==0)
    {
        printf("toplam fatura : 0TL'dir");
    }
    else if(a<=3)
    {
        printf("toplam fatura : %fTL'dir",b);
    }
    else
    {
        b=((a-3)/1)*0.08+0.25;
        printf("toplam fatura : %.3fTL'dir",b);
    }

    getch();
    return 0;
}
