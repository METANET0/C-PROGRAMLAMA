#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    printf("bu program girdiginiz tek karakterin kucultulmesini saglar\n\n");
    printf("bir buyuk karakter giriniz\n");
    scanf("%c",&a);

    printf("karakterinizin kucultulmus hali : %c ",tolower(a));
    getch();
    return 0;
}
