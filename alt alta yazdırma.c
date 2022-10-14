#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cumle[100];
    int i=0;
    printf("alt alta harflerini yazdirmak istediginiz cumleyi giriniz\n");
    fgets(cumle,sizeof(cumle),stdin);
    printf("\n");
    while(cumle[i])
    {
        printf("%c",cumle[i]);
        printf("\n");
        i++;
    }
    getch();
    return 0;
}
