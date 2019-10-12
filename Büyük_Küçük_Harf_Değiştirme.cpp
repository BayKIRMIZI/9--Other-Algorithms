#include<stdio.h>
#include<conio.h>

int main()
{
	char h;
	int a;
	
	basadon:
	printf("Harf giriniz :");
	scanf("%c",&h);
	printf("\n");
	if(h>='A' && h<='Z')
	{
		printf("Girdiginiz buyuk harfin kucuk hali : %c",h+32);
	}
	else if(h>='a' && h<='z')
	{
		printf("Girdiginiz kucuk harfin buyuk hali : %c",h-32);
	}
	else
	{
		printf("Lutfen harf giriniz ...!!!");
		goto basadon;
	}
	printf("\nTekrar harf girmek istiyormusunuz :1-EVET 2-HAYIR :");
	scanf("%d",&a);
	
	if(a==1)
	{
		goto basadon;
	}
	
	
	getch();
}
