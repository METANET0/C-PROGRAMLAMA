#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    //cumledeki kel�me say�s�n� bulan program
    char cumle[100];
    int i=0,sayac=0;
    printf("kelime sayisini bulmami istediginiz cumleyi giriniz\n");
    fgets(cumle,sizeof(cumle),stdin);
//burada son karaktere kadar kontrol etmek i�in while kulland�k.
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
