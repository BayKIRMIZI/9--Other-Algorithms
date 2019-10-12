#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k;
	
	printf("Boyut giriniz :");
	scanf("%d",&k);
	
	for(i=1;i<=k/2+1;i++)
	{
		for(j=1;j<=k;j++)
		{
			if(j==k/2+1 || i==k/k)
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
