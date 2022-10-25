#include <stdio.h>
#include <stdlib.h>

void floyd(int sayi)
{
    int i=1,j,a=1;
    while(i<=sayi)
    {
        j=1;
        while(j<=i)
        {
            printf("%3d",a);
            j++;
            a++;
        }
        printf("\n");
        i++;
    }
    getch();
}
int main()
{
    int satir;
    printf("kac satirli floyd ucgeni uretilecek : ");
    scanf("%d",&satir);
    floyd(satir);

    return 0;
}
