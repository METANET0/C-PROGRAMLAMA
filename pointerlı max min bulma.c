#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,dizi[100];
    printf("kac elemanli dizi giriceksiniz\n");
    scanf("%d",&a);
    printf("elemanlari giriniz\n");
    elemanalici(dizi,a);
    b=max(dizi,a);
    c=min(dizi,a);
    printf("en buyuk sayi %d'dir\n",b);
    printf("en kucuk sayi %d'dir",c);
    getch();
    return 0;
}
void elemanalici(int *array,int elemansayisi)
{
    int sonsayi;
    sonsayi=array+elemansayisi-1;
    for(array;array<=sonsayi;array++)
    {
        scanf("%d",&*array);
    }
}
int max(int *dizi,int sayi)
{
    int a,i=*dizi;
    for(a=0;a<sayi;a++)
    {
        if(i<*dizi)
        {
            i=*dizi;
        }
        dizi++;
    }
    return i;
}
int min(int *dizi,int sayi)
{
    int a,i=*dizi;
    for(a=0;a<sayi;a++)
    {
        if(i>*dizi)
        {
            i=*dizi;
        }
        dizi++;
    }
    return i;
}

