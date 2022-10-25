#include <stdio.h>
#include <stdlib.h>

float alan(int sayi)
{
    return pow(sayi,2)*sqrt(3)/4;
}


int main()
{
    int kenar;
    printf("eskenar ucgenin bir kenarini giriniz\n");
    scanf("%d",&kenar);
    printf("alan : %.2f",alan(kenar));
    getch();
    return 0;
}
