#include <stdio.h>
#include <stdlib.h>

int us(int a,int b)
{
    int i,c=1;
    for(i=1;i<=b;i++)
    {
        c=c*a;
    }
    return c;
}

int main()
{
    int a,b,c;
    printf("bu program us");
    printf("ussunu hesaplamak istediginiz sayinin tabanini giriniz : ");
    scanf("\n%d",&a);
    printf("ussu giriniz : ");
    scanf("\n%d",&b);
    c=us(a,b);
    printf("%d ^ %d = %d",a,b,c);

    getch();
    return 0;
}
