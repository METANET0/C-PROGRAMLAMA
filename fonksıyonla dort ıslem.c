#include <stdio.h>
#include <stdlib.h>
void dortislem(char b,int a,int c)
{
    if(b=='+')
    {
        printf("toplam = %d",a+c);
    }
    else if(b=='-')
    {
        printf("cýkarma = %d",a-c);
    }
    else if(b=='*')
    {
        printf("carpma = %d",a*c);
    }
    else if(b=='/')
    {
        printf("bolme = %d",a/c);
    }
    else
    {
        printf("gecerli islem giriniz");

    }
    getch();
}





int main()
{
    char a;
    int b,c;
    printf("yapmak istediginiz islemi seciniz (+,-,*,/)\n");
    scanf("%c",&a);
    printf("iki sayi giriniz\n");
    scanf("%d%d",&b,&c);
    dortislem(a,b,c);

    return 0;
}
