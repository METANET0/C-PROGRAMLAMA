#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c[15]={'k','l','b','d','q','i','s','t','e','f','o','r','c','h','x'};
    char *p,*o,i,kopya[15];
    p=kopya;
    for(o=c;o<c+15;o++)
    {
        *p=*o;
         p++;
    }
    printf("dizinin kendisi:\n");
    for(i=0;i<15;i++)
    {
        printf("%.3c\2",*(c+i));
    }
    printf("\n\n");
    printf("kopyalanmis dizi:\n");
    for(i=0;i<15;i++)
    {
        printf("%.3c\2",*(kopya+i));
    }
    getch();
    return 0;
}
