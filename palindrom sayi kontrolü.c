#include <stdio.h>
#include <stdlib.h>

int main()
{
//klavyeden girilen sayýnýn palindrom okup olmadýgýný kontrol eden program
 char a[100];
 int dok=0,karakter=0,i;
 char *p;
 printf("lutfen en fazla 100 karakterli bir kelime giriniz\n");
 scanf("%s",&a);
 for(p=a;*p;p++)
 {
   karakter++;
 }
for(i=0;i<karakter/2;i++)
 {
  if(a[i]==a[(karakter-1)-i])
    {
     dok++;
    }
 }
  if(dok==karakter/2)
    {
     printf("kelime palindromdur");
    }
  else
    {
     printf("kelime palindrom degildir");
    }
    getch();
	return 0;
}

