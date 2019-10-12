#include<conio.h>
#include<stdio.h>
int main()
{
	int s;
	
	printf("Bir tusa basiniz :");
	scanf("%c",&s);
	
	if(s>='a' && s<='z')
	{
		printf("Kucuk harf girdiniz...!");
	}
	
	
	else if(s>='A' && s<'Z')
	{
		printf("Buyuk harf girdiniz...!");
	}
	
	
	else if(s>='0' && s<='9')
	{
		printf("Sayi girdiniz...!");
	}
	
	
	else
	printf("Harf veya sayi girmediniz...!");
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	getch();
}
