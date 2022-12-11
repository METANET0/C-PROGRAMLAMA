#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *p,*o,a[5][50];
    int i,j;
    printf("elemanlari giriniz\n");
    for(i=0;i<5;i++)
    {
        printf("%d.eleman:",i+1);
        scanf("%s",a+i);
    }
    for(i=0;i<5;i++)
    {
        p=o=a[i];
        while(*o)
        {
            o++;
        }
        o--;
        while(p<o)
        {
            j=*p;
            *p=*o;
            *o=j;
            p++;
            o--;
        }
    }
    for(i=0;i<5;i++)
    {
     printf("%s\n",a[i]);
    }
    getch();
    return 0;
}
