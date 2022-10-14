#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b;
    char c;
    printf("bu program girdiginiz iki sayinin carpiminin pozitifmi,negatifmi yoksa sifirmi oldugunu gosterir\n");
    printf("\n");
    do
    {
    printf("iki tane sayi giriniz\n");
    scanf("%f%f",&a,&b);


    if(((a>0)&&(b>0))||((a<0)&&(b<0)))
    {
        printf("girdiginiz sayilarin carpim sonucu pozitifdir\n\n");
    }
    else if (((a<0)&&(b>0))||((a>0)&&(b<0)))
    {
        printf("girdiginiz sayilarin carpim sonucu negatiftir\n\n");
    }
    else
    {
       printf("girdiginiz sayilarin carpim sonucu 0 dir\n\n");
    }
    }
    while(c='n');

    getch();
    return 0;
}
