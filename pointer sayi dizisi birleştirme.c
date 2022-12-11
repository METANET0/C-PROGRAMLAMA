#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c[50],d[50],i,*p;
    printf("birinci dizinin eleman sayisini giriniz\n");
    scanf("%d",&a);
    printf("birinci dizinin elemanlarini giriniz\n");
    for(i=0;i<a;i++)
    {
        printf("%d.eleman:",i+1);
        scanf("%d",c+i);
    }
    printf("ikinci dizinin eleman sayisini giriniz\n");
    scanf("%d",&b);
    printf("ikinci dizinin elemanlarini giriniz\n");
    for(i=0;i<b;i++)
    {
        printf("%d.eleman:",i+1);
        scanf("%d",d+i);
    }
    p=d;
    printf("birinci dizi elemanlari\n");
    for(i=0;i<a;i++)
    {
        printf("%d ",c[i]);
    }
    for(i=0;i<b;i++)
    {
        *(c+a+i)=*p;
        p++;
    }
    printf("\nikinci dizi elemanlari\n");
    for(i=0;i<b;i++)
    {
        printf("%d ",d[i]);
    }
    printf("\ndizilerin birlestirilmis hali\n");
    for(i=0;i<a+b;i++)
    {
        printf("%d ",c[i]);
    }
    getch();
    return 0;
}
