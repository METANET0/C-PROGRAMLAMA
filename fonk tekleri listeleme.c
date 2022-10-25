#include <stdio.h>
#include <stdlib.h>
void liste(int sayi)
{
    int i;
    if(sayi%2==0)
    {
        for(i=1;i<=sayi-1;i+=2)
        {
            printf("%d\n",i);
        }
    }
    else if(sayi%2==1)
    {
        for(i=1;i<=sayi;i+=2)
        {
            printf("%d\n",i);
        }
    }
    else
    {
        printf("gecerli sayi giriniz");
    }
    getch();
}



int main()
{
    int sayi;
    printf("lutfen pozitif bir sayi giriniz : ");
    scanf("%d",&sayi);
    liste(sayi);
    return 0;
}
