#include<conio.h>
#include<stdio.h>
int main()
{
	int x;
	
	printf("Toplamaya Gore Tersini Almak Istediginiz Sayiyi Giriniz :");
	scanf("%d",&x);
	
	x=~x+1;
	printf("Girilen Sayinin Toplamaya Gore Tersi : %d",x);
	
	getch();
}
