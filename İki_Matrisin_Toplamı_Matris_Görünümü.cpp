#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,toplam;
	printf("Stun degerleri icin TAB satýr degerleri icin ENTER son degeri girince ENTER a bas\n");
	printf(" matrisin satir sayisini giriniz: ");
	scanf("%d",&a);
	printf("\n");
	
	printf(" matrisin stun sayisini giriniz: ");
	scanf("%d",&b);
	printf("\n");
	
		int A[a][b];
		int i,j;
	
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
    	{
		scanf("%d",&A[i][j]);
		printf("\t\t");
    	}
		printf("\n\n");
	}
	printf("\n    + \n\n");
	
		int B[a][b];
	
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
    	{
		scanf("%d",&B[i][j]);
		printf("\t\t");
	 	}  
	 	printf("\n\n");
	}
	
	printf("\n\t = \n\n");
	
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
    	{
		
		toplam=A[i][j]+B[i][j];
		printf("%d ",toplam);
		printf("\t\t");
    	}
		printf("\n\n");
	}
		
	
	
	
	getch();
}
