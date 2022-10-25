#include <stdio.h>
#include <stdlib.h>

float celcius(float fahrenheit)
{
    return (0.5555)*(fahrenheit-32);
}
float fahrenheit(float celcius)
{
    return 1.8*celcius+32;
}
int main()
{
    float x,b,deger;
    int islem;
    printf("1-fahrenheit => celcius\n");
    printf("2-celcius => fahrenheit\n\n");
    printf("secim yapiniz : ");
    scanf("%d",&islem);
    if(islem==1)
    {
    printf("fahrenheit degerini giriniz\n");
    scanf("%f",&b);
    deger=celcius(b);
    printf("%.2f fahrenheit %.2f celcius'dur",b,deger);
    }
    else if(islem==2)
    {
    printf("celcius degerini giriniz\n");
    scanf("%f",&x);
    printf("%.2f celcius %.2f fahrenheit'dir",x,fahrenheit(x));
    }
    else
    {
        printf("gecerli deger giriniz");
    }
    getch();
    return 0;
}
