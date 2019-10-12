#include"conio.h"
#include"stdio.h"
main(){
	int n;
	printf("Boyut giriniz : ");
	scanf("%d",&n);
	int yildiz=0,bosluk;
	bosluk=n/2;
	
	for(int i=0;i<n;i++)
	{
		if(i<n/2)
		{
			for(int t=0;t<bosluk;t++)
			{
				printf(" ");
			}
			for (int t=0;t<=yildiz;t++)
			{
				printf("*");
			}
			printf("\n");
			bosluk--;
			yildiz+=2;
		}
		else
		{
			for(int t=0;t<bosluk;t++)
			{
				printf(" ");
			}
			for (int t=0;t<=yildiz;t++)
			{
				printf("*");
			}
			printf("\n");
			bosluk++;
			yildiz-=2;
		}
	}
	
	getch();
}
