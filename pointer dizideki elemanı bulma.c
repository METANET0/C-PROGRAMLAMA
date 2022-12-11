#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main()
{
//girilen dizideki eleman sirasini bulan algoritma
 int arr[100];
 int a,b,c;
 printf("kac elemanli dizi giriceksiniz\n");
 scanf("%d",&a);
 printf("elemanlari giriniz\n");
 bastir(arr,a);
 printf("hangi elemani aradiginizi giriniz\n");
 scanf("%d",&b);
 c=ara(arr,a,b);
 if(c==-1)
 {
     printf("%d sayisi dizide bulunamiyor\n",b);
 }
 else
 {
     printf("%d sayisi %d. siradadir\n",b,c+1);
 }
    getch();
	return 0;
}
void bastir(int *arr,int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        scanf("%d",&*arr);
        arr++;
    }
    arr=arr-size;
}
int ara(int *arr,int elemansayisi,int aranan)
{
    int sonsayi,index=0;
    sonsayi=arr+elemansayisi-1;
    while(arr<=sonsayi && *arr!=aranan)
    {
        arr++;
        index++;
    }
    if(*arr==aranan)
    {
        return index;
    }
        return -1;
}
