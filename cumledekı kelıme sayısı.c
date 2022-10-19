#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    //cumledeki kelýme sayýsýný bulan program
    char cumle[100];
    int i=0,sayac=0;
    printf("kelime sayisini bulmami istediginiz cumleyi giriniz\n");
    fgets(cumle,sizeof(cumle),stdin);
//burada son karaktere kadar kontrol etmek için while kullandýk.
    while(cumle[i])
    {
        if(cumle[i]==32)
        {
            sayac++;
        }
        i++;
    }
    printf("girilen cumledeki kelime sayisi : %d\n",sayac+1);


    getch();
    return 0;
}
