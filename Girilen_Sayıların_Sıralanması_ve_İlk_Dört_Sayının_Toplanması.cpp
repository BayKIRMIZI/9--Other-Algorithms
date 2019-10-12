#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,g,n,dizi[100],toplam=0;
	printf("En az 4 sayi girin\n");
	printf("Kac sayi girmek istiyorsunuz :");
	scanf("%u",&n);if(n<4)n=4;
	
	
	for(i=0;i<n;i++)
	{
		printf("a[%u]=",i+1);
		scanf("%d",&dizi[i]);
	}

	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(dizi[j]>dizi[j+1])
			{
			g=dizi[j];
			dizi[j]=dizi[j+1];
			dizi[j+1]=g;
			}	
		}
	}
	
	printf("\nSayilar\n");
	for(i=0;i<n;i++)
	printf("%u. eleman =%d\n",i+1,dizi[i]);
	
	for(i=0;i<4;i++)
	{
		toplam=toplam+dizi[i];
	}
	
	printf("ilk dort sayinin toplami : %d",toplam);
	
getch();
}
