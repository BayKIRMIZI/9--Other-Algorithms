#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	printf("harfin buyuklugu :");
	scanf("%d",&a);
	
	for(int i=1;i<=a;i++)
	{
		for(int j=1;j<=a;j++)
		{
			if(j==1 || j==a || i==a/2+1)
			{
				printf("*");
			}
			else 
			{
			printf(" ");	
			}
		}
		printf("\n");
	}	
	
	
	getch();
}
