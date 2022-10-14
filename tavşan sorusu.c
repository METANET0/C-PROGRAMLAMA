#include <stdio.h>
#include <stdlib.h>

int main()
{
        printf("tavsanlarin sayisi 1042 iken kuslarin sayisi 2272'dir.bir yilda tavsanlar yuzde 3.8\ntavuklar ise yuzde 1.2 cogalmaktadir.tavsanlarin kuslarin sayisini kac yil sonra\ngecicegini bulan program\n\n");
    getch();
    float a=1042,b=2272,c=0;
    while (a<b)
    {
        a+=a*38/1000;
        b+=b*12/1000;
        c+=1;
        printf("%.0f.yilda tavsan=%.0f tavuk=%.0f\n",c,a,b);
    }
    printf("\n%.0f YIL SONRA GECER\n",c);
    getch();
    return 0;
}
