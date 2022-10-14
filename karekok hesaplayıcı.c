#include <stdio.h>
#include <stdlib.h>

int main()
{
    float toplam,f;
    printf("bu program girdiginiz pozitif sayinin karekokunu hesaplar.0 yazdiginizda program sonlanir\n\n");

   do
   {
       printf("bir pozitif sayi giriniz : ");
       scanf("%f",&f);
       while(f<0)
       {
            printf("lutfen bir pozitif sayi giriniz : ");
            scanf("%f",&f);
       }
       if (f>0)
       {
       printf("\nsonuc : %.3f\n\n",sqrt(f));
       }

   }
   while(f!=0);
   getch();
    return 0;
}
