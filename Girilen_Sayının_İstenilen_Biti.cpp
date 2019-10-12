#include<conio.h>
#include<stdio.h>
int main()
{
	int sayi,x,i,n;
	x=0x0001;
	printf("bir sayi giriniz:");
	scanf("%d",&sayi);
	printf("\n");
	
	printf("sayinin kacinci biti kontrol edilecek:");
	scanf("%d",&n);
	printf("\n");
	
		for(i=0;i<n;i++)
		
			sayi=sayi>>1;
			if(x&sayi)
			printf("sayinin %d. biti : 1",n);
			else
			printf("sayinin %d. biti : 0",n);
		
	
	getch();
}
