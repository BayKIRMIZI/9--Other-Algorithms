#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()   
{
	int s=0,y,i=0,j;
	
	char dizi[10];
	printf("Ikilik tabanda en fazla 10 basamakli sayi giriniz :\n");
	scanf("%s",dizi);
	
	while(dizi[i]!=0)
	{
		i++;
	}
	
	y=i;
	
	for(j=0;j<i;j++)
	{
		int carpim=1;
		for(int k=0;k<y-1;k++)
		{
			carpim*=2;
		}
		s=s+(dizi[j]-48)*carpim;
		y--;
	}
	
	printf("sayi = %d",s);
	
	getch();
}
