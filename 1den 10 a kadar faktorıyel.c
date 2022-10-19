#include <stdio.h>
#include <stdlib.h>
int faktoriyel(int a)
{
    int i,b=1;
    for(i=1;i<=a;i++)
    {
        b=i*b;
    }
    return b;
}

int main()
{
    int a,b;
    printf("bu program sizin icin 1 den 10'a kadar butun sayilarin faktoriyelini hesaplicak\n\n");
    printf("hazirmisin?\n\n");
    getch();
    for(a=1;a<=10;a++)
    {
        b=faktoriyel(a);
        printf("%d! = %d\n",a,b);
    }

    getch();
    return 0;
}
