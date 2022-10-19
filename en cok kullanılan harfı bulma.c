#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cumle[1000],harf;
    int i=0,encok;
    int kucukharf[1000]={0};
    printf("bu program girdiginiz cumledeki en cok kullanilan karakteri gosterir fakat esit sayida girerseniz sonuc vermicektir\n\n");
    printf("lutfen bir cumle giriniz\n");
    gets(cumle);

    while(cumle[i])
    {
        if(cumle[i]>='a' && cumle[i]<='z')
        {
            kucukharf[cumle[i]-'a']++;
        }
        i++;
    }
    encok=kucukharf[0];
    for(i=1;i<26;i++)
    {
        if(kucukharf[i]!=0)
        {
            if(kucukharf[i]>encok)
            {
                encok=kucukharf[i];
                harf=i+'a';
            }
        }
    }
    printf("\nen fazla kullanilan harf : %c",harf);
    getch();
    return 0;
}
