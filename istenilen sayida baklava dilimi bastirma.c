#include <stdio.h>
#include <stdlib.h>

void baklava1(int x)
{
    int i,k,j,a,b,c;
    for(i=1;i<=x;i++)
    {
     for(k=1;k<=x-i;k++)
     {
         printf(" ");
     }
     for(j=1;j<i*2;j++)
     {
        printf("x");
     }

        printf("\n");
    }
    for(a=x-1;a>=1;a--)
    {
        for(b=x-a;b>=1;b--)
        {
            printf(" ");
        }
        for(c=(a*2)-1;c>=1;c--)
        {
            printf("x");
        }
        printf("\n");
    }
    getch();
}

      /*   4 için
       123x  1
         xxx  3
        xxxxx  5
       xxxxxxx  7
        xxxxx  5
         xxx   3
          x    1         */

int main()
{
    int satir;
    printf("kac satirli olsun : ");
    scanf("%d",&satir);
    baklava1(satir);
    return 0;
}
