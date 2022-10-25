#include <stdio.h>
#include <stdlib.h>

void fibonacci(int x)
{
    int a=0,birinci=1,ikinci=1,gecici;
    if(x%2==0)
    {
         while(a<x)
        {
            printf("%d\n%d\n",birinci,ikinci);
            birinci=birinci+ikinci;
            ikinci=birinci+ikinci;
            a+=2;
        }
    }
     else if(x%2==1)
    {
          while(a<x-1)
        {
            printf("%d\n%d\n",birinci,ikinci);
            birinci=birinci+ikinci;
            ikinci=birinci+ikinci;
            a+=2;
        }
            printf("%d\n",birinci);
    }
    else
    {
        printf("gecerli sayi giriniz\n");
    }
    getch();
}
int main()
{
    int sayi;
    printf("kac fibonacci sayisi uretilecegini giriniz : ");
    scanf("%d",&sayi);

    fibonacci(sayi);
    return 0;
}
