#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
float Alan(int cap)
{
    float i;
    i=PI*pow(cap,2);
    return i;
}
float Cevre(int cap)
{
    float j;
    j=2*PI*cap;
    return j;
}


int main()
{
    int cap;
    float alan,cevre;
    printf("dairenin capini giriniz : ");
    scanf("%d",&cap);
    alan=Alan(cap);
    cevre=Cevre(cap);
    printf("dairenin alani : %.2f\n",alan);
    printf("dairenin cevresi : %.2f\n",cevre);
    getch();
    return 0;
}
