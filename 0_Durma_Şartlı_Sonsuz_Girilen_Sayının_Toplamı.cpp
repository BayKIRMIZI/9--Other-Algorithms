#include<stdio.h>
#include<conio.h>
int main()
{
	int i,s,toplam=0;
	
	for(i=0;;i++)
	{	
		printf("Sayi giriniz :");
		scanf("%d",&s);
		
		if(s!=0)
		
		toplam=toplam+s;
		
		if(s==0) break;
	}
	
	printf("Sayilarin toplami : %d",toplam);
	
	getch();
}
