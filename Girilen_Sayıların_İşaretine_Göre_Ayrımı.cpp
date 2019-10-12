#include<stdio.h>
#include<conio.h>
int main()
{
 int All[100],Positive[100],Negative[100],n,s,j=0,k=0;
 
 	printf("Kac sayi girmek istiyorsunuz :");
 	scanf("%d",&n);
 	
    for(int i=0;i<n;i++)
    {
    	printf("sayi giriniz:");
    	scanf("%d",&s);
    	All[i]=s;
      
     		if(All[i]>=0) 
	  			{
				  Positive[j]=All[i];
				  j++ ;    
				}
      		else 
	  			{
				  Negative[k]=All[i];
				  k++; 
				}
       
    }
        printf("negatif sayilar : ");
             
	for(int i=0;i<k;i++)
    {
        printf("%d,",Negative[i]);
    }
     	printf("\npositif sayilar : ");
    
    for(int i=0;i<j;i++)
    {
   		printf("%d,",Positive[i]);
    }
	
	
	
	getch();
}
