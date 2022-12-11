#include <stdio.h>
#include <stdlib.h>
struct sayi
{
    int a,b;
};
int main()
{
    char c;
    printf("yapmak istediginiz islemi giriniz(-,+)\n");
    scanf("%c",&c);
    struct sayi dog,duck,hand;
    printf("birinci karmasik sayiyi giriniz\n");
    scanf("%d %d",&dog.a,&dog.b);
    printf("ikinci karmasik sayiyi giriniz\n");
    scanf("%d %d",&duck.a,&duck.b);
    if(c=='+')
    {
    hand.a=dog.a+duck.a;
    hand.b=dog.b+duck.b;
    }
    else if(c=='-')
    {
    hand.a=dog.a-duck.a;
    hand.b=dog.b-duck.b;
    }
    else
    {
        printf("duzgun operator giriniz lutfen");
        getch();
        return 0;
    }
    if(hand.b>0)
    {
          printf("%d+%di",hand.a,hand.b);
    }
    else if (hand.b<=0)
    {
         printf("%d %di",hand.a,hand.b);
    }
    getch();
    return 0;
}
