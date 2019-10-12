#include<stdio.h>
#include<conio.h>
int main()
{
	int dizi[100],x,i=0,sayac1=0,sayac2=0;
	printf("Bir sayi giriniz :");
	scanf("%d",&x);
	
	while(x>=1)
	{
		i++;
		dizi[i]=x%2;
		x=x/2;
		if (dizi[i]==0) sayac2++;
		else sayac1++;
	}
	for (i;i>0;i--)
	{
		printf("%d",dizi[i]);
	}
	printf("\nsayinin icinde %d tane 1 vardir",sayac1);
	printf("\nsayinin icinde %d tane 0 vardir",sayac2);
	
	
	getch();
}
