#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	double s,sayac=9;
	int i,n,toplam=0;
	int dizi[10];
	
	for(i=0;i<10;i++)
	{
		printf("10 basamakli ikilik tabandaki sayinin a[%u] elemani=",i+1);
		scanf("%d",&dizi[i]);
	}
	
	for(i=0;i<10;i++)
	{
		s=dizi[i]*(pow(2,sayac) );
		toplam=toplam+s;
		sayac--;
	}
	
	printf("\n\nSayinin onluk tabandaki karsiligi = %d",toplam);
	
getch();
}
