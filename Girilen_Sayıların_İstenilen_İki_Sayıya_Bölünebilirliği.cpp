#include<stdio.h>
#include<conio.h>
int main ()
{
	int dizi[100],n,x,y,i,sonuc1,sonuc2;
	printf("Kac sayi girmek istiyorsunuz:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\nSayi gir:");
		scanf("%d",&dizi[i]);
	}
	printf("\nIki sayi giriniz :\n");
	scanf("%d %d",&x,&y);
	
	for(i=0;i<n;i++)
	{
		if(dizi[i]%x==0 && dizi[i]%y==0)
		printf("%d-%d ve %d 'e tam bolunebilir\n",dizi[i],x,y);
		
		else if(dizi[i]%x==0) 
		printf("\n%d-%d 'e tam bolunur\n",dizi[i],x);
		else if(dizi[i]%y==0) 
		printf("\n%d-%d 'e tam bolunur\n",dizi[i],y);
		else  
		printf("\n%d-%d ve %d 'e tam bolunmez\n",dizi[i],x,y);
	}
	
	
	
	
	
	
	getch();
}
