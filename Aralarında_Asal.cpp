#include<stdio.h>
#include<conio.h>
int main()
{
	int s1,s2,bolen,i=2,j=2,sayac=0;
	printf("1. Sayiyi giriniz :");
	scanf("%d",&s1);
	printf("2. Sayiyi giriniz :");
	scanf("%d",&s2);
	
	for( i,j;i<s1 || j<s2;i++,j++)
	{
		if(s1%i==0 && s2%j==0)
		{
			printf("\nBolen sayi = %d\n",i);
			sayac++;
		}
	}	
	if(sayac>0)
	{
		printf("\nAralarinda asal degildir.\n");
	}
	else
	{
		printf("\nAralarinda asaldir\n");
	}
	
	
	getch();
}
