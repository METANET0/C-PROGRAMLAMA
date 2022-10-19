#include <stdio.h>
#include <stdlib.h>
int faktoriyel(int a)
{
    int i,t=1;
    for(i=1;i<=a;i++)
    {
       t=i*t;
    }
    return t;
}



int main()
{
    int a,b;
    printf("faktoriyelini istediginiz bir sayi giriniz\n");
    scanf("%d",&a);
    b=faktoriyel(a);
    printf("faktoriyel %d = %d",a,b);
    getch();
    return 0;
}
