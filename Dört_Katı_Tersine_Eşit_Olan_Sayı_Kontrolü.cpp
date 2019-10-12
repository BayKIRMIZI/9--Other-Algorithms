#include<stdio.h>
#include<conio.h>
main()
{
	int s,s1,s2,s3,s4,s5,s6;
	
	printf("Dort basamakli sayi giriniz :");
	scanf("%d",&s);
	
	s1=s/1000;  // 1453  s1 = 1  --  
	s2=(s-s1*1000)/100; // (1453-1000)/100 -- s2=4 ---
	s3=((s-s1*1000)-s2*100)/10; // ((1453-1000)-400)/10 -- s3=5 ---
	s4=(((s-s1*1000)-s2*100)-s3*10)/1; // ( ( (1453-1000) -400) -50)/1 --- s4=3 ---
	
	s5=s1+s2*10+s3*100+s4*1000;
	s6=s5*4;
	printf("Girdiginiz sayinin tersten yazilmis hali : %d",s5);
	
	if(s==s6)
	{
		printf("\nIslem=> %d * 4 = %d",s5,s);
		printf("\nSayinin tersinin 4 kati kendisine esittir...");
	}
	else
	{
		printf("\nIslem => %d * 4 != %d",s5,s);
		printf("\nSayinin tersinin 4 kati kendisine esit degildir...!!!");
	}
	getch();
}
