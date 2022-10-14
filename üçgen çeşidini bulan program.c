#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c;
    printf("bu program girdiginiz ucgenin uc acisina gore ucgenin cesitini bulur\n");
    printf(" \n");

    printf("ucgeninizin 3 acisini giriniz\n");
    scanf("%f%f%f",&a,&b,&c);
   while(a+b+c!=180)
   {
    printf("girdiginiz acilarin toplami 180'e esit olmalidir\n\n");
    printf("ucgeninizin 3 acisini giriniz\n");
    scanf("%f%f%f",&a,&b,&c);
   }
    if((a==b)||(a==c)||(b==c))
    {
        if(a==b==c)
        {
            printf("ucgenimiz eskenar ucgendir\n");
        }
        else
        {
            printf("ucgenimiz ikizkenar ucgendir\n");
        }

    }
     else
     {
         printf("ucgenimiz cesitkenar ucgendir\n");
     }
     getch();
    return 0;
}
