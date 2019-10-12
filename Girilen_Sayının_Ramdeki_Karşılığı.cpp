#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y;
	
	printf("Bir sayi giriniz :\n");
	scanf("%d",&x);
	
	y=0x8000;
	printf("Sayiniz		:");
	for(int i=0;i<16;i++)
	{
		if(x&y) printf("1");
		else printf("0");
		y=y>>1;
	}	
	getch();
}
