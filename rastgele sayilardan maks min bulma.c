#include <stdio.h>
#include <stdlib.h>
int max(int sayi[],int a)
{
   int k,b;
   b=sayi[0];
   for(k=0;k<=a-1;k++)
   {
      if(b<sayi[k])
      {
          b=sayi[k];
      }
   }
   return b;
}

int min(int sayi[],int a)
{
   int k,b;
   b=sayi[0];
   for(k=0;k<=a-1;k++)
   {
      if(b>sayi[k])
      {
          b=sayi[k];
      }
   }
   return b;
}

int main()
{
    int a,i;
    printf("kac adet sayi uretilecek : ");
    scanf("%d",&a);
    int sayi[a];
    srand(time(0));
    printf("\ndizinin elemanlari : ");
    for(i=0;i<=a-1;i++)
    {
        sayi[i]=rand()%100+1;
        printf("%d ",sayi[i]);
    }
    printf("\n\n en buyuk sayi : %d\n",max(sayi,a));
    printf(" en kucuk sayi : %d\n",min(sayi,a));
    getch();
    return 0;
}
