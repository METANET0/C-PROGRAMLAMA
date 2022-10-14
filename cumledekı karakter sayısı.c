#include <stdio.h>
#include <stdlib.h>

int main()
{
     char karakter[1000];
     int i=0;
     printf("karakter sayisini bulmami istediginiz cumleyi giriniz\n");
     fgets(karakter,sizeof(karakter),stdin);
     while(karakter[i])
     {
            i++;
     }
     printf("cumledeki karakter sayisi : %d",i);

    getch();
    return 0;
}
