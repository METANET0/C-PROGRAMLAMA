#include <stdio.h>
#include <stdlib.h>

void siralama(int bar[],int no)
{
    int i,gecici,j,k;
    for(k=0;k<no-1;k++)
    {
         for(i=0;i<no-1;i++)
      {
        if(bar[i]>bar[i+1])
        {
         gecici=bar[i];
         bar[i]=bar[i+1];
         bar[i+1]=gecici;
        }
      }
    }

    for(j=0;j<no;j++)
    {
        printf("%d ",bar[j]);
    }
    getch();
}



int main()
{
    int sayi,i;
    printf("kac adet sayi uretilecegini giriniz : ");
    scanf("%d",&sayi);
    int dizi[sayi];
    srand(time(0));
    for(i=0;i<sayi;i++)
    {
        dizi[i]=rand()%100;
        printf("%d\n",dizi[i]);
    }
    printf("sayilarin siralanmis hali ;\n");
    siralama(dizi,sayi);
    return 0;
}
