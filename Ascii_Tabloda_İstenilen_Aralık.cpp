#include<stdio.h>
#include<conio.h>
#include<windows.h>
main()
{
	int a;
	printf("1-A ile Z arasi \n2-a ile z arasi \n3-0 ile 9 arasi\nASCII de hangi araligi yazdirmak istiyorsunuz :\n");

	scanf("%d",&a);
	printf("\n\t\t\t\n");
	int i;
	if (a==1)
	{	
		for(i='a';i<='z';i++)
		printf("%c\n",i);
	}
	else if (a==2)
	{
		for(i='A';i<='Z';i++)
		printf("%c\n",i);
	}
	else if (a==3)
	{
		for(i='0';i<='9';i++)
		printf("%c\n",i);
	}
	
	else 
	{
		printf("\nLutfen bu seceneklerden biriniz seciniz...!!! %C",34);
	}
	
	
	getch();
}
