#include<stdio.h>
#include<conio.h>
int main()
{
 int n,x,i;
	
    printf("Bir sayi gir =");
	scanf("%d",&n);
	
    printf("bolumu istenilen sayi :) =");
	scanf("%d",&x);
    
    for(i=1;i<=n;i++)
	{
		if(i%x==0)
		{
			printf("\a\n%d %d a/e bolunur \n\a",i,x);
		}
		else printf("\a\n%d %d a/e bolunmez \n\a",i,x);
	}
	getch();
	return 0;
}
