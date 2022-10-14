#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    int a;
    printf("bu program girdiginiz buyuk veya kucuk harfin alfabedeki sirasini bulur\n");
    printf("\nharf giriniz\n");
    scanf("%c",&ch);

    if((ch>='A')&&(ch<='Z'))
    {
        a=(int)ch-(int)'A'+1;
        printf("%c harfiniz %d. siradadir\n",ch,a);
    }
    else if ((ch>='a')&&(ch<='z'))
    {
        a=(int)ch-(int)'a'+1;
        printf("%c harfiniz %d. siradadir\n",ch,a);
    }
    else
    {
        printf("lutfen harf giriniz\n");
    }
    getch();
    return 0;
}
