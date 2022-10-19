#include <stdio.h>
#include <stdlib.h>
int negatif(int a)
{
    printf("\n");
    if(a<0)
    {
        return 0;
    }
    return 1;
}

int main()
{
    int a,b=1;
    printf("bu program negatif sayi girince sonlanir\n\n");
    while (b==1)
    {
    printf("bir sayi giriniz : ");
    scanf("%d",&a);
    b=negatif(a);
    }


    getch();
    return 0;
}
