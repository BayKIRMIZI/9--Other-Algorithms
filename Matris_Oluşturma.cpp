#include<conio.h>
#include<stdio.h>
int main()
{
	int a,b,s;
	printf("Kaca kac lik bir matris girmek istiyorsunuz :\n");
	printf("Satir sayisi :");
	scanf("%d",&a);
	printf("Sutun sayisi :");
	scanf("%d",&b);
	int A[a][b];
	
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
			printf("A[%d][%d]=",i,j);
			scanf("%d",&s);
			A[i][j]=s;
		}
		printf("\n");
	}
	printf("\n");
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
			printf("%d",A[i][j]);
			printf("\t");
		}
		printf("\n\n\n");
		
	}
	
	getch();
}
