#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,toplam,dizi[100];
	float ort,s;
	printf("Kac sayinin ortalamasini almak istiyorsunuz :");
	scanf("%d",&n);
	
	for (i=0;i<n;i++)
	{
		printf("Sayi giriniz :");
		scanf("%f",&s);
		dizi[i]=s;
		float toplam=toplam+s;
		float (ort=toplam/n);
	}
			for(i=0;i<n;i++)
			{
				if(dizi[i]>ort)
				printf("Ortalamanin uzerindeki deger =%d\n",dizi[i]);
			}
		printf("Girdiginiz sayilarin ortalamasi = %.2f",ort);
	getch();
}
