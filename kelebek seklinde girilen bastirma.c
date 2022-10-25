#include <stdio.h>
#include <stdlib.h>

void kelebek(int satir,char karakter)
{
    int i,j,k,t,m,n;
    for(i=satir;i>=1;i--)
    {
        for(k=satir-i;k>=1;k--)
        {
            printf(" ");
        }
        for(j=i*2-1;j>=1;j--)
        {

            printf("%c",karakter);
        }
        printf("\n");
    }
    for(t=1;t<=satir;t++)
    {
        for(m=1;m<=satir-t;m++)
        {
            printf(" ");
        }
        for(n=1;n<=t*2-1;n++)
        {
            printf("%c",karakter);
        }
        printf("\n");
    }
    getch();
}
int main()
{
    int satir;
    char karakter;
    printf("istenilen karakteri giriniz : ");
    scanf("%c",&karakter);
    printf("satir sayisini giriniz : ");
    scanf("%d",&satir);
    kelebek(satir,karakter);
    return 0;
}
