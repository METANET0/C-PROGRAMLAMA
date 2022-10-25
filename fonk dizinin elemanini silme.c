#include <stdio.h>
#include <stdlib.h>
void sayisilme(int says[],int eleman,int sira)
{
 int k,j;
 for(k=sira-1;k<eleman-1;k++)
 {
     says[k]=says[k+1];
 }
 for(j=0;j<eleman-1;j++)
 {
     printf("%d\n",says[j]);
 }
 getch();
}
int main()
{
    int sayi,i,a;
    printf("kac tane sayi uretilsin? : ");
    scanf("%d",&sayi);
    int dizi[sayi];
    srand(time(0));
    for(i=0;i<sayi;i++)
    {
        dizi[i]=rand()%100;
        printf("%d\n",dizi[i]);
    }
    printf("kacinci sayi silinsin : ");
    scanf("%d",&a);
    sayisilme(dizi,sayi,a);
    return 0;
}
