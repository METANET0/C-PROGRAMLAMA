#include <stdio.h>
#include <stdlib.h>
void tekmiciftmi(int sayi)
{
    if(sayi%2==0)
    {
        printf("sayiniz cifttir ");
    }
    else if(sayi%2==1)
    {
        printf("sayiniz tektir ");
    }
    else
    {
        printf("gecerli sayi giriniz ");
    }
}

int main()
{
    int sayi;
    printf("ciftmi tekmi oldugunu arastirdiginiz tam sayiyi giriniz : ");
    scanf("%d",&sayi);
    tekmiciftmi(sayi);
    getch();
    return 0;
}
