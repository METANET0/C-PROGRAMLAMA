#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *p[7]={"pazartesi","sali","carsamba","persembe","cuma","cumartesi","pazar"};
    int a;
    do
    {
     printf("lutfen 1 ile 7 arasindan bir deger girerek haftanin gunlerini bastirin : ");
     scanf("%d",&a);
    }while(a>7 || a<1);
    printf("%d numarali haftanin gunu %s'dir\n",a,p[a-1]);
    getch();
    return 0;
}
