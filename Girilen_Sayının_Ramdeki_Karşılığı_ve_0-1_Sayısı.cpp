#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,i,a,sayac=0,sayac1=0;
	printf("Bir sayi giriniz :");
	scanf("%d",&a);
	x=0x8000;
	printf("sayi:");
	for(i=0;i<16;i++)
	{
		if (a&x) 
		{
			printf("1"); sayac++;
		}
		else
		{
			printf("0"); sayac1++;
		}
		x=x>>1;
	}
	printf("\nSayinizda %d tane 1 \n%d tane 0 var",sayac,sayac1);
	
	
	getch();
}
