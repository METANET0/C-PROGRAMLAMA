#include <stdio.h>
#include <stdlib.h>
#define tam 150
int main()
{
    int boy,i,no,minno,minboy,fark;
    fark=10000;
    printf("3 tane ogrenci bilgilerini girin bizde size hangisinin 150cm e daha yakin oldugunu gosterelim\n");
    for(i=1;i<4;i++)
    {
        printf("\n%d.Ogrenci no: ",i);
        scanf("%d",&no);
        printf("\n%d.Ogrenci boy : ",i);
        scanf("%d",&boy);

        if(abs(boy-tam)<fark)
        {
            fark=abs(boy-tam);
            minno=no;
            minboy=boy;
        }
    }


    printf("\n%d numarali ogrenci %d cm boyuyla %d cm e en yakindir.Tekrar bekleriz ;)\n",minno,minboy,tam);
     getch();
    return 0;
}
