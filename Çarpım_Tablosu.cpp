#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf("%d * %d = %d\t",j,i,i*j);
		}
		printf("\n");
	}
	printf("\n");
	for(i=1;i<=10;i++)
	{
		for(j=4;j<=6;j++)
		{
			printf("%d * %d = %d\t",j,i,i*j);
		}
		printf("\n");
	}
	printf("\n");
	for(i=1;i<=10;i++)
	{
		for(j=7;j<=9;j++)
		{
			printf("%d * %d = %d\t",j,i,i*j);
		}
		printf("\n");
	}
	printf("\n");
	for(i=1;i<=10;i++)
	{
		for(j=10;j<=10;j++)
		{
			printf("%d * %d = %d\t",j,i,i*j);
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	
	getch();
}
